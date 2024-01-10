#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1,2,3,4,5};
    bool hasDuplicates = false;

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (numbers[i] == numbers[j]) {
                hasDuplicates = true;
                break;
            }
        }
        if (hasDuplicates) {
            break;
        }
    }

    if (hasDuplicates) {
        std::cout << "В массиве есть одинаковые элементы." << std::endl;
    } else {
        std::cout << "В массиве нет одинаковых элементов." << std::endl;
    }

    return 0;
}
