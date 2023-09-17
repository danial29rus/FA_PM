#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Введите первое положительное целое число: ";
    std::cin >> num1;

    std::cout << "Введите второе положительное целое число: ";
    std::cin >> num2;

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    std::cout << "НОД = " << num1 << std::endl;

    return 0;
}