#include <iostream>
#include <vector>

void cyclicShiftLeft(std::vector<int>& arr) {
    int size = arr.size();
    if (size <= 2) {
        return;
    }


    int firstElement = arr[0];
    int secondElement = arr[1];


    for (int i = 2; i < size; i++) {
        arr[i - 2] = arr[i];
    }


    arr[size - 2] = firstElement;
    arr[size - 1] = secondElement;
}

int main() {
    std::vector<int> arr;
    arr.push_back(100);
    arr.push_back(-12);
    arr.push_back(10);
    arr.push_back(200);
    arr.push_back(320);
    arr.push_back(-40);

    cyclicShiftLeft(arr);

    std::cout << "Массив после циклического сдвига на две позиции влево:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
