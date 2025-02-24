#include <iostream>

class Base {
public:
    virtual ~Base() { // Virtual destructor
        std::cout << "Base destructor called\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor called\n";
    }
};

int main() {
    // Creating a pointer of type Base that points to an instance of Derived class. Enables polymorphism.
    Base* ptr = new Derived();
    delete ptr; // Properly calls Derived's destructor, then Base's destructor
    system("pause");
    return 0;
}
