#include <iostream>
using namespace std;

// Define a class called "Car"
class Car {
public:
    // Class data members
    string model;
    string color;

    // Class member function
    void displayInfo() {
        cout << "Car: " << model << " & color: " << color << endl;
    }
};

int main() {
    // Creating objects (instances of the class)
    Car car1;
    car1.model = "Maruti";
    car1.color = "Grey";
    
    // Using class method
    car1.displayInfo();

    Car car2;
    car2.model = "Safari";
    car2.color = "Green";

    // Using class method
    car2.displayInfo();

    return 0;
}
