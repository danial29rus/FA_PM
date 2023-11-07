#include <iostream>
#include <thread>
#include <pthread.h>

void printThreadInfo(int i) {
    pthread_t tid = pthread_self();
    int policy;
    struct sched_param param;
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

    // Создаем поток
    threadResult = pthread_create(&thread, nullptr, (void*(*)(void*))printThreadInfo, &i);

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

    for (int j = 0; j < 10; ++j) {
        std::cout << "Main: Line " << j << std::endl;
    }

    return 0;
}
