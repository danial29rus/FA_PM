#include <iostream>
#include <thread>
#include <pthread.h>

void printThreadInfo(int i) {
    pthread_t tid = pthread_self();
    int policy;
    struct sched_param param;

    // Получаем информацию о нити, включая приоритет
    pthread_getschedparam(tid, &policy, &param);

    printf("Thread ID: %p\n", tid);
    printf("Thread Priority: %d\n", param.sched_priority);
    printf("Local Variable Address: %p\n", &i);

    for (int j = 0; j < 10; ++j) {
        std::cout << "Thread: Line " << j << std::endl;
    }
}

int main() {
    // Отключаем буферизацию stdout
    setvbuf(stdout, nullptr, _IONBF, 0);

    int i = 42; // Локальная переменная

    pthread_t thread;
    int threadResult;
    pthread_attr_t attr;

    // Инициализируем атрибуты нити
    pthread_attr_init(&attr);

    // Устанавливаем приоритет
    struct sched_param param;
    param.sched_priority = 30;
    pthread_attr_setschedparam(&attr, &param);

    // Устанавливаем стек (замените NULL на желаемый размер стека)
    size_t stackSize = 4096; // Размер стека
    pthread_attr_setstacksize(&attr, stackSize);

    // Создаем поток с атрибутами
    threadResult = pthread_create(&thread, &attr, (void*(*)(void*))printThreadInfo, &i);

    if (threadResult) {
        std::cerr << "Error creating thread: " << threadResult << std::endl;
        return 1;
    }

    // Ожидаем завершения потока
    threadResult = pthread_join(thread, nullptr);

    if (threadResult) {
        std::cerr << "Error joining thread: " << threadResult << std::endl;
        return 1;
    }

    // Уничтожаем атрибуты нити
    pthread_attr_destroy(&attr);

    for (int j = 0; j < 10; ++j) {
        std::cout << "Main: Line " << j << std::endl;
    }

    return 0;
}
