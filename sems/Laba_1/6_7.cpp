#include <iostream>
#include <cmath>

int main() {
    float a, b;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    float average_arithmetic = (a + b) / 2;
    float average_geometric = std::sqrt(a * b);

    std::cout << "Среднее арифметическое: " << average_arithmetic << std::endl;
    std::cout << "Среднее геометрическое: " << average_geometric << std::endl;

    return 0;
}
