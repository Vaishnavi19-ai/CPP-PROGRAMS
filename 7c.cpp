#include <iostream>
#include <cstring>

class StringConcat {
private:
    char str[200]; // Increased buffer size to prevent overflow
public:
    // Constructor to initialize string
    StringConcat(const char* s) {
        strcpy(str, s);
    }

    // Overloading + operator to concatenate two strings
    StringConcat operator+(const StringConcat& obj) {
        char temp[200]; // Temporary storage for concatenation
        strcpy(temp, str);
        strcat(temp, obj.str);
        return StringConcat(temp); // Return a new StringConcat object
    }

    // Function to display string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    StringConcat str1("Py");
    StringConcat str2("thon");
    StringConcat result = str1 + str2; // Concatenation using operator+
    result.display();
    system("pause");
    return 0;
}
