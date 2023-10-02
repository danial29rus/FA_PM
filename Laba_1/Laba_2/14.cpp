#include <iostream>
#include <vector>

double calculateExpression(const std::vector<int>& x) {
    double y = 0.0;
    int m = -1;

    for (int i = 0; i < x.size(); i++) {
        if (x[i] < 0) {
            m = i;
            break;
        }
        y += x[i];
    }

    if (m == -1) {

        m = x.size() - 1;
    }

    for (int i = 1; i <= m; i++) {
        y *= x[i];
    }

    return y;
}

int main() {
    std::vector<int> arr;
    arr.push_back(100);
    arr.push_back(-12);
    arr.push_back(10);
    arr.push_back(200);
    arr.push_back(320);
    arr.push_back(-40);

    double result = calculateExpression(arr);

    std::cout << "Результат вычисления выражения: " << result << std::endl;

    return 0;
}
