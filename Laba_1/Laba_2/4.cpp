#include <iostream>
#include <vector>
void printNumbers(int n,  std::vector<int>& arr) {
    if (n <= 0) {
        return;
    }


    printNumbers(n - 1, arr);
    arr.push_back(n);

}

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Введите положительное натуральное число." << std::endl;
    } else {
        std::vector<int> arr;
        printNumbers(n, arr);

        std::cout << "Числа от 1 до " << n << ": ";
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " \n";
        }
        std::cout << std::endl;
    }

    return 0;
}







