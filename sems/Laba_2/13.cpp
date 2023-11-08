#include <iostream>
#include <vector>

int sumBetweenMinMax(const std::vector<int>& arr) {
    int size = arr.size();
    if (size == 0) {
        return 0;
    }

    int minIndex = 0;
    int maxIndex = 0;


    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }


    int startIndex = std::min(minIndex, maxIndex);
    int endIndex = std::max(minIndex, maxIndex);

    int sum = 0;

    for (int i = startIndex; i <= endIndex; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    std::vector<int> arr;
    arr.push_back(100);
    arr.push_back(-12);
    arr.push_back(10);
    arr.push_back(200);
    arr.push_back(320);
    arr.push_back(-40);

    int result = sumBetweenMinMax(arr);

    std::cout << "Сумма элементов между максимальным и минимальным элементами: " << result << std::endl;

    return 0;
}
