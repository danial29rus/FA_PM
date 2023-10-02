#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortArray(std::vector<int> arr, bool ascending) {
    if (ascending) {
        std::sort(arr.begin(), arr.end());
    } else {
        std::sort(arr.rbegin(), arr.rend());
    }
    return arr;
}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bool ascending;
    std::cout << "Введите булевскую переменную (1 - по возрастанию, 0 - по убыванию): ";
    std::cin >> ascending;

    std::vector<int> sortedArr = sortArray(arr, ascending);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        std::cout << sortedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
