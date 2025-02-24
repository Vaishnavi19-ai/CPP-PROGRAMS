#include <iostream>  // Correct header

class xyz {
public:
    xyz() {
        std::cout << "\n Constructor was called ";
    }
    ~xyz() {  // Destructor with tilde (~)
        std::cout << "\n Destructor was called";
    }
};

int main() {
    xyz B;  // Object created, constructor is called
    system("pause");
    return 0;
}
