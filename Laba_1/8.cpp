#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    std::cout << "Введите x1: ";
    std::cin >> x1;
    std::cout << "Введите y1: ";
    std::cin >> y1;
    std::cout << "Введите x2: ";
    std::cin >> x2;
    std::cout << "Введите y2: ";
    std::cin >> y2;

    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    std::cout << "Расстояние между точками: " << distance << std::endl;

    return 0;
}
