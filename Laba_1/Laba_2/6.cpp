#include <iostream>
#include <cmath>

double equation(double x) {
    return cos(pow(x, 5)) + pow(x, 4) - 345.3 * x - 23;
}

double findRoot(double left, double right, double epsilon) {
    double mid = (left + right) / 2;
    double f_mid = equation(mid);


    if (fabs(right - left) < epsilon) {
        return mid;
    }

    if (f_mid == 0.0) {
        return mid;
    } else if (f_mid * equation(left) < 0) {

        return findRoot(left, mid, epsilon);
    } else {

        return findRoot(mid, right, epsilon);
    }
}

int main() {
    double left = 0.0;
    double right = 10.0;
    double epsilon = 0.001;

    double root = findRoot(left, right, epsilon);

    std::cout << "Корень уравнения: " << root << std::endl;

    return 0;
}
