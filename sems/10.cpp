#include <iostream>

int main() {
    float num1, num2, num3;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Введите третье число: ";
    std::cin >> num3;

    float max_number;

    if (num1 > num2 && num1 > num3)  {
        max_number = num1;
    }
    else if (num2 > num1 && num2 > num3) {
        max_number = num2;
    }
    else {
        max_number = num3;
    }

    std::cout << "Среднее число: " << max_number << std::endl;

    return 0;
}
