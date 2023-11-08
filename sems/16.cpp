#include <iostream>

int main() {
    int a,b;
    std::cout << "Введите целое число a: ";
    std::cin >> a;
    std::cout << "Введите целое число b: ";
    std::cin >> b;

    for (int i = a; i <= b; i ++) {
        std::cout << "ичсло внутри интервала: " << i << std::endl;
    }




    return 0;
}
