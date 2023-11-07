#include <iostream>
#include <thread>
#include <vector>
#include <string>

void printText(const std::vector<std::string>& text) {
    for (const std::string& line : text) {
        std::cout << line << std::endl;
    }
}

int main() {
    // Определяем последовательности строк для каждой нити
    std::vector<std::string> text1 = {"Thread 1: Line 1", "Thread 1: Line 2", "Thread 1: Line 3"};
    std::vector<std::string> text2 = {"Thread 2: Line 1", "Thread 2: Line 2", "Thread 2: Line 3"};
    std::vector<std::string> text3 = {"Thread 3: Line 1", "Thread 3: Line 2", "Thread 3: Line 3"};
    std::vector<std::string> text4 = {"Thread 4: Line 1", "Thread 4: Line 2", "Thread 4: Line 3"};

    // Создаем четыре нити, каждая с разной последовательностью строк
    std::thread thread1(printText, text1);
    std::thread thread2(printText, text2);
    std::thread thread3(printText, text3);
    std::thread thread4(printText, text4);

    // Ожидаем завершения всех нитей
    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();

    return 0;
}
