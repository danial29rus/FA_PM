#include <iostream>
#include <cmath>

int main() {
    float a, b, c;

    // Ввод коэффициентов a, b и c
    std::cout << "Введите коэффициент a: ";
    std::cin >> a;

    std::cout << "Введите коэффициент b: ";
    std::cin >> b;

    std::cout << "Введите коэффициент c: ";
    std::cin >> c;

    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        float root2 = (-b - std::sqrt(discriminant)) / (2 * a);

        std::cout << "Два корня: " << root1 << " и " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        float root = -b / (2 * a);
        std::cout << "Один корень: " << root << std::endl;
    }
    else {
        std::cout << "Нет действительных корней." << std::endl;
    }

    return 0;
}
