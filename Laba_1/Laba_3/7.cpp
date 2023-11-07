#include <iostream>
#include <thread>
#include <csignal>
#include <unistd.h>
#include <pthread.h>

void signalHandler(int sig) {
    pthread_t tid = pthread_self();
    std::cout << "Thread ID: " << tid << " received signal " << sig << std::endl;
}

void childThread() {
    // Устанавливаем обработчик сигнала SIGINT
    struct sigaction sa;
    sa.sa_handler = signalHandler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sigaction(SIGINT, &sa, NULL);

    pthread_t tid = pthread_self();
    std::cout << "Child Thread ID: " << tid << std::endl;

    // Ждем сигнала SIGINT
    sigset_t mask;
    sigemptyset(&mask);
    sigaddset(&mask, SIGINT);
    int sig;
    sigwait(&mask, &sig);
}

int main() {
    pthread_t child;
    pthread_create(&child, NULL, (void*(*)(void*))childThread, NULL);

    // Ждем некоторое время перед отправкой сигнала
    sleep(2);

    // Отправляем сигнал SIGINT дочерней нити
    pthread_t childThreadId = child;
    pthread_kill(childThreadId, SIGINT);

    pthread_join(child, NULL);

    return 0;
}

