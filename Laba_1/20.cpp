#include <iostream>
#include <cmath>

int main() {
    int N;

    std::cout << "Введите число N: ";
    std::cin >> N;

    double log_base_22 = log(N) / log(22);

    if (std::floor(log_base_22) == log_base_22) {
        std::cout << N << " является степенью числа 22." << std::endl;
    } else {
        std::cout << N << " не является степенью числа 22." << std::endl;
    }

    return 0;
}
