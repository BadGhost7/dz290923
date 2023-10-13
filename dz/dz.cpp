#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string brand;
    string model;
    int year;
    string color;
    double price;

public:
    Car(string brand, string model, int year, string color, double price) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->color = color;
        this->price = price;
    }

    void printInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2021, "Black", 25000.50);
    car.printInfo();

    return 0;
}