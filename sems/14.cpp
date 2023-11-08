#include <iostream>

int main() {
    int n;
    std::cout << "Введите целое число n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Двойной факториал не определен для отрицательных чисел." << std::endl;
    } else {
        int result = 1;

        while (n > 0) {
            result *= n;
            n -= 2;
        }

        std::cout << "Двойной факториал n!! = " << result << std::endl;
    }

    return 0;
}
