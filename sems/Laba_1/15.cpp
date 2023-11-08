#include <iostream>

int main() {
    int n;
    std::cout << "Введите целое число n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Двойной факториал не определен для отрицательных чисел." << std::endl;
    } else {
        int result = 1;

        for (int i = n; i > 0; i = i - 2) {
            result *= i;
        }

        std::cout << "Двойной факториал n!! = " << result << std::endl;
    }

    return 0;
}
