#include <iostream>

int main() {
    float x, y;

    std::cout << "Введите координату x: ";
    std::cin >> x;

    std::cout << "Введите координату y: ";
    std::cin >> y;
    if (x > 0 && y > 0) {
        std::cout << "Точка находится в первой четверти." << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "Точка находится во второй четверти." << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "Точка находится в третьей четверти." << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "Точка находится в четвёртой четверти." << std::endl;
    } else if (x == 0 && y == 0) {
        std::cout << "Точка находится в начале координат." << std::endl;
    } else if (x == 0) {
        std::cout << "Точка находится на оси OY." << std::endl;
    } else {
        std::cout << "Точка находится на оси OX." << std::endl;
    }

    return 0;
}
