#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void voice() {
        cout << "The dog barks" << endl;
    }
};

class Cat : public Animal {
    public:
        void voice() {
            cout << "The cat purrs~" << endl;
        }
};
int main() {
    Dog dog;
    dog.eat();  // Inherited from Animal class
    dog.voice(); // Defined in Dog class

    Cat cat;
    cat.eat();  // Inherited from Animal class
    cat.voice(); // Defined in Dog class
    
    return 0;
}
