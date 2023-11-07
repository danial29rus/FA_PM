#include <iostream>
#include <thread>
#include <pthread.h>

void printFromThread() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "Thread: Line " << i << std::endl;
    }
}

int main() {
    // Отключаем буферизацию stdout
    setvbuf(stdout, nullptr, _IONBF, 0);

    pthread_t thread;
    int threadResult;

    // Создаем поток
    threadResult = pthread_create(&thread, nullptr, (void*(*)(void*))printFromThread, nullptr);

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

    for (int i = 0; i < 10; ++i) {
        std::cout << "Main: Line " << i << std::endl;
    }

    return 0;
}
