#include <iostream>

int main() {
    int number;
    std::cout << "Введите неотрицательное целое число: ";
    std::cin >> number;

    if (number < 10) {
        std::cout << "Число не является двузначным." << std::endl;
    } else {
        int tens = (number / 10) % 10;

        std::cout << "Число десятков: " << tens << std::endl;
    }

    return 0;
}
