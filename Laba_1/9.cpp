#include <iostream>

int main() {
    double num1, num2, num3;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Введите третье число: ";
    std::cin >> num3;

    double middle_number;

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        middle_number = num1;
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        middle_number = num2;
    }
    else {
        middle_number = num3;
    }

    std::cout << "Среднее число: " << middle_number << std::endl;

    return 0;
}
