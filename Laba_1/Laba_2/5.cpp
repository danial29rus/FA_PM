#include <iostream>
#include <vector>
#include <ctime>

bool binarySearchRecursive(const std::vector<int>& arr, int left, int right, int target) {
    if (left > right) {
        return false;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return true;
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target); // Поиск в правой половине
    } else {
        return binarySearchRecursive(arr, left, mid - 1, target); // Поиск в левой половине
    }
}

bool binarySearch(const std::vector<int>& arr, int target) {
    return binarySearchRecursive(arr, 0, arr.size() - 1, target);
}

bool linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int n = 100000000;
    std::vector<int> arr(n);


    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int target = 232143231;


    clock_t start = clock();
    bool foundBinary = binarySearch(arr, target);
    clock_t end = clock();

    if (foundBinary) {
        std::cout << "Бинарный поиск: Элемент найден." << std::endl;
    } else {
        std::cout << "Бинарный поиск: Элемент не найден." << std::endl;
    }

    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Время выполнения бинарного поиска: " << elapsed_time << " секунд." << std::endl;

    // Замер времени для линейного поиска
    start = clock();
    bool foundLinear = linearSearch(arr, target);
    end = clock();

    if (foundLinear) {
        std::cout << "Линейный поиск: Элемент найден." << std::endl;
    } else {
        std::cout << "Линейный поиск: Элемент не найден." << std::endl;
    }

    elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Время выполнения линейного поиска: " << elapsed_time << " секунд." << std::endl;

    return 0;
}
