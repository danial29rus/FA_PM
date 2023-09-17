#include <iostream>

int main() {
    unsigned int N;

    std::cout << "Введите натуральное число N: ";
    std::cin >> N;
    std::cout << "Цифры числа " << N << " в обратном порядке: ";

    while (N > 0) {
        int digit = N % 10;
        std::cout << digit;

        N = N / 10;
    }

    std::cout << std::endl;

    return 0;
}
