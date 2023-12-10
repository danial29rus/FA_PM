#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>
class Vector {
private:
    double x, y, z;

public:
    Vector(double x, double y, double z) : x(x), y(y), z(z) {}


    double length() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    double dot(const Vector &other) const {
        return x * other.x + y * other.y + z * other.z;
    }

    Vector cross(const Vector &other) const {
        return Vector(
                y * other.z - z * other.y,
                z * other.x - x * other.z,
                x * other.y - y * other.x
        );
    }

    double angle(const Vector &other) const {
        return dot(other) / (length() * other.length());
    }

    Vector operator+(const Vector &other) const {
        return Vector(x + other.x, y + other.y, z + other.z);
    }


    Vector operator-(const Vector &other) const {
        return Vector(x - other.x, y - other.y, z - other.z);
    }

    static std::vector<Vector> generateRandomVectors(int N) {
        std::vector<Vector> vectors;
        for (int i = 0; i < N; i++) {
            vectors.push_back(Vector(
                    static_cast<double>(rand()) / RAND_MAX,
                    static_cast<double>(rand()) / RAND_MAX,
                    static_cast<double>(rand()) / RAND_MAX
            ));
        }
        return vectors;
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};