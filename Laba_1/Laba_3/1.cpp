#include <iostream>
#include <thread>
#include <cstdlib>

void printFromThread() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "Thread: Line " << i << std::endl;
    }
}

int main() {
    // Отключаем буферизацию stdout
    setvbuf(stdout, nullptr, _IONBF, 0);

    std::thread myThread(printFromThread);

    for (int i = 0; i < 10; ++i) {
        std::cout << "Main: Line " << i << std::endl;
    }

    myThread.join();

    return 0;
}
