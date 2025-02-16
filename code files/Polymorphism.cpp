#include <iostream>
using namespace std;

class Printer {
public:
    // Overloaded function to print different types of data
    void print(int i) {
        cout << "Printing integer: " << i << endl;
    }

    void print(double d) {
        cout << "Printing double: " << d << endl;
    }

    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    Printer printer;
    printer.print(5);      // Calls the print(int) function
    printer.print(5.6);    // Calls the print(double) function
    printer.print("Hello"); // Calls the print(string) function

    return 0;
}
