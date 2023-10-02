#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result;
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i = 0;
    int j = 0;


    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }


    while (i < size1) {
        result.push_back(arr1[i]);
        i++;
    }

    while (j < size2) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
    std::vector<int> arr1;
    std::vector<int> arr2;
    arr1.push_back(1);
    arr1.push_back(12);
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    arr1.push_back(40);
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(40);
    arr2.push_back(50);
    arr2.push_back(60);

    std::vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

    std::cout << "Объединенный упорядоченный массив:" << std::endl;
    for (int num : mergedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
