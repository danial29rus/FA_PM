#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int size = arr.size();

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;


        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }


        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    std::vector<int> arr;
    arr.push_back(100);
    arr.push_back(-12);
    arr.push_back(10);
    arr.push_back(200);
    arr.push_back(320);
    arr.push_back(-40);

    selectionSort(arr);

    std::cout << "Отсортированный массив по неубыванию:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
