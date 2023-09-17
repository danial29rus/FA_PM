#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите длину первого отрезка: ";
    std::cin >> a;

    std::cout << "Введите длину второго отрезка: ";
    std::cin >> b;

    std::cout << "Введите длину третьего отрезка: ";
    std::cin >> c;

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            std::cout << "Это равносторонний треугольник." << std::endl;
        } else if (a == b || a == c || b == c) {
            std::cout << "Это равнобедренный треугольник." << std::endl;
        } else {
            std::cout << "Это разносторонний треугольник." << std::endl;
        }
    } else {
        std::cout << "Треугольник с такими сторонами не существует." << std::endl;
    }

    return 0;
}
