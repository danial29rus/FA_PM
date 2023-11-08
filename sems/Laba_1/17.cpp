#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cout << "Введите последовательность чисел:" << std::endl;

    while (true) {
        std::cin >> number;

        if (number == -9999) {
            break;
        }

        std::cout << "Введенное число: " << number << std::endl;
        sum += number;
    }

    std::cout << "Сумма всех чисел в последовательности: " << sum << std::endl;

    return 0;
}
