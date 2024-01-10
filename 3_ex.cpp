#include <iostream>

void printNumbers(int n) {
    if (n >= 1) {
        printNumbers(n - 1);
        std::cout << n << " ";
    }
}

int main() {
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    printNumbers(n);
    std::cout << std::endl;

    return 0;
}
