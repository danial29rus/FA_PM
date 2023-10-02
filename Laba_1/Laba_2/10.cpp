#include <iostream>
#include <vector>

int findMaxByAbsoluteValue(const std::vector<int>& arr) {
    int maxAbsValue = 0;
    int maxIndex = -1;
    int size = arr.size();

    for (int i = 0; i < size; i++) {
        int absValue = std::abs(arr[i]);
        if (absValue > maxAbsValue) {
            maxAbsValue = absValue;
            maxIndex = i;
        }
    }

    return maxIndex;
}

int main() {
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(-10);
    arr.push_back(10);
    arr.push_back(-20);
    arr.push_back(30);
    arr.push_back(40);

    int maxIndex = findMaxByAbsoluteValue(arr);

    if (maxIndex != -1) {

        arr[maxIndex] = -arr[maxIndex];

        std::cout << "Массив после изменения знака у максимального по модулю элемента:" << std::endl;
        for (int num : arr) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Массив пуст." << std::endl;
    }

    return 0;
}
