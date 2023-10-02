#include <iostream>
#include <vector>
#include <cmath>

int findClosestToAverage(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    double average = static_cast<double>(sum) / arr.size();
    int closest = arr[0];
    int minDiff = std::abs(arr[0] - average);

    for (int num : arr) {
        int diff = std::abs(num - average);
        if (diff < minDiff) {
            minDiff = diff;
            closest = num;
        }
    }

    return closest;
}

int main() {
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    int closestElement = findClosestToAverage(arr);

    std::cout << "Наиболее близкий элемент к среднему: " << closestElement << std::endl;

    return 0;
}
