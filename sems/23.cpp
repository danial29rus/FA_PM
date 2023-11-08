#include <iostream>

int main() {
    int n;
    std::cout << "Введите оценку: ";
    std::cin >> n;


    if (n == 1) {
        std::cout << "Плохо" << std::endl;
    } else if (n == 2) {
        std::cout << "Неудовлетворительно" << std::endl;
    } else if (n == 3) {
        std::cout << "Удовлетворительно" << std::endl;
    } else if (n == 4) {
        std::cout << "Хорошо" << std::endl;
    } else if (n == 5) {
        std::cout << "Отлично" << std::endl;
    }else{
        std::cout << "Оценка не в интервале от 1 до 5" << std::endl;
    }

    return 0;
}