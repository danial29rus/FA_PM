#include <iostream>
#include <string>

class Children {
private:
    std::string name;
    std::string surname;
    int age;

public:
    void setData(const std::string& name, const std::string& surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    void displayData() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Surname: " << surname << "\n";
        std::cout << "Age: " << age << "\n\n";
    }
};

int main() {
    Children child1, child2;


    child1.setData("Alice", "Johnson", 10);


    child2.setData("Bob", "Smith", 12);


    std::cout << "Child 1 data:\n";
    child1.displayData();

    std::cout << "Child 2 data:\n";
    child2.displayData();

    return 0;
}
