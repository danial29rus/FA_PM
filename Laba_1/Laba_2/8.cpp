#include <iostream>
#include <vector>

bool hasDuplicates(const std::vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);

    if (hasDuplicates(arr)) {
        std::cout << "В массиве есть одинаковые элементы." << std::endl;
    } else {
        std::cout << "В массиве нет одинаковых элементов." << std::endl;
    }

    return 0;
}
