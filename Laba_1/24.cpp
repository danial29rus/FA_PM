#include <iostream>
#include <cmath>

int main() {
    float x, y, z;

    std::cout << "Введите координаты вектора (x y z): ";
    std::cin >> x >> y >> z;

    double length = std::sqrt(x * x + y * y + z * z);
    double scalarProduct = x + y + z;
    double X = y - z;
    double Y = z - x;
    double Z = x - y;
    double sumX = x + x;
    double sumY = y + y;
    double sumZ = z + z;

    double diffX = x - x;
    double diffY = y - y;
    double diffZ = z - z;

    std::cout << "Длина вектора: " << length << std::endl;
    std::cout << "Скалярное произведение векторов: " << scalarProduct << std::endl;
    std::cout << "Векторное произведение векторов: (" << X << ", " << Y<< ", " << Z << ")" << std::endl;
    std::cout << "Сумма векторов: (" << sumX << ", " << sumY << ", " << sumZ << ")" << std::endl;
    std::cout << "Разность векторов: (" << diffX << ", " << diffY << ", " << diffZ << ")" << std::endl;

    return 0;
}