#include <iostream>
#include <string>

class Tiles {
public:
    std::string brand;
    int size_h;
    int size_w;
    double price;

    void getData() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Height: " << size_h << " Width: " << size_w << "\n";
        std::cout << "Price: " << price << "\n\n";
    }
};

int main() {
    Tiles tile1, tile2;

    tile1.brand = "BrandA";
    tile1.size_h = 20;
    tile1.size_w = 30;
    tile1.price = 17.5;


    tile2.brand = "BrandB";
    tile2.size_h = 25;
    tile2.size_w = 35;
    tile2.price = 20.0;


    std::cout << "Tile 1 data:\n";
    tile1.getData();

    std::cout << "Tile 2 data:\n";
    tile2.getData();

    return 0;
}
