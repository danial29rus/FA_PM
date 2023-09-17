#include <iostream>
int main() {
    int a = 5;
    int b = 10;
    int c = 5;
    int d = 10;
    // 1 Способ через временную переменную
    int temp = a;
    a = b;
    b = temp;
    // 2 способ через математическую операцию
    c = c + d;
    d = c - d;
    c = c - d;


    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    return 0;
}
