#include <iostream>
#include <vector>
#include <memory>


class Shape {
public:
    virtual double getVolume() const = 0;
    virtual ~Shape() {}
};


class Cube : public Shape {
private:
    double side;
public:
    Cube(double side) : side(side) {}
    double getVolume() const override {
        return side * side * side;
    }
};


class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double radius) : radius(radius) {}
    double getVolume() const override {
        return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    }
};


class Box : public Shape {
private:
    double maxVolume;
    double currentVolume;
    std::vector<std::shared_ptr<Shape>> shapes;

public:
    Box(double maxVolume) : maxVolume(maxVolume), currentVolume(0) {}

    bool add(const std::shared_ptr<Shape>& shape) {
        double shapeVolume = shape->getVolume();
        if (currentVolume + shapeVolume <= maxVolume) {
            shapes.push_back(shape);
            currentVolume += shapeVolume;
            return true;
        }
        return false;
    }

    double getVolume() const override {
        return currentVolume;
    }
};

int main() {
    Box box(1000);

    box.add(std::make_shared<Cube>(10));
    box.add(std::make_shared<Sphere>(5));

    std::cout << "Total volume in the box: " << box.getVolume() << std::endl;

    return 0;
}
