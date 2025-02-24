#include <iostream>

class MyClass {
private:
    int myVariable;

public:
    // Default constructor
    MyClass() {
        myVariable = 0; // Assigning a default value
    }

    void displayValue() {
        std::cout << "The value is: " << myVariable << std::endl;
    }
};

int main() {
    MyClass myObject; // Creating an object of MyClass
    myObject.displayValue(); // Displaying the default value
    system("pause");
    return 0;
}
