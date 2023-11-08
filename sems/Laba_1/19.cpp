#include <iostream>

int main() {
    int N;

    std::cout << "Введите число N: ";
    std::cin >> N;

    std::cout << "Точные квадраты натуральных чисел, не превосходящие " << N << ":" << std::endl;

    for (int i = 1; i * i <= N; ++i) {
        std::cout << i * i << " ";
    }

    std::cout << std::endl;

    return 0;
}
