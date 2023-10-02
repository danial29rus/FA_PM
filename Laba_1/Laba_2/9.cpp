#include <iostream>
#include <vector>

int countConsecutiveDuplicates(const std::vector<int>& arr) {
    int count = 0;
    int size = arr.size();

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);

    int consecutiveDuplicates = countConsecutiveDuplicates(arr);

    std::cout << "Количество элементов, идущих подряд и равных между собой: " << consecutiveDuplicates << std::endl;

    return 0;
}
