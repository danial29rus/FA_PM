#include <iostream>
#include <cmath>

int main() {
    float x, y, z;

    std::cout << "Введите координаты вектора (x y z): ";
    std::cin >> x >> y >> z;

    float length = std::sqrt(x * x + y * y + z * z);
    float scalarProduct = x + y + z;
    float X = y - z;
    float Y = z - x;
    float Z = x - y;
    float sumX = x + x;
    float sumY = y + y;
    float sumZ = z + z;

    float diffX = x - x;
    float diffY = y - y;
    float diffZ = z - z;

    std::cout << "Длина вектора: " << length << std::endl;
    std::cout << "Скалярное произведение векторов: " << scalarProduct << std::endl;
    std::cout << "Векторное произведение векторов: (" << X << ", " << Y<< ", " << Z << ")" << std::endl;
    std::cout << "Сумма векторов: (" << sumX << ", " << sumY << ", " << sumZ << ")" << std::endl;
    std::cout << "Разность векторов: (" << diffX << ", " << diffY << ", " << diffZ << ")" << std::endl;

    return 0;
}