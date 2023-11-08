#include <iostream>

int main() {
    int number;
    int max, min;

    std::cout << "Введите первое целое число ";
    std::cin >> number;
    max = 0;
    min = 99999;

    while (number != 0) {
        std::cout << "Введите следующее число (окончание - введите 0): ";
        std::cin >> number;

        if (number == 0) {
            break;
        }
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }

    std::cout << "Максимальное значение: " << max << std::endl;
    std::cout << "Минимальное значение: " << min << std::endl;

    return 0;
}
