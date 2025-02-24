#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string name;

    void setData(int r, string n) {
        rollno = r;
        name = n;
    }

    void display() {
        cout << "Roll Number: " << rollno << ", Name: " << name << endl;
    }
};

// Pass by Value (Creates a Copy)
void printByValue(Student s) {
    cout << "Inside printByValue function (Pass by Value):" << endl;
    s.display();
    s.name = "Modified";  // This will not affect the original object
}

// Pass by Reference (Modifies Original Object)
void printByReference(Student &s) {
    cout << "Inside printByReference function (Pass by Reference):" << endl;
    s.display();
    s.name = "Modified";  // This will modify the original object
}

int main() {
    Student obj;
    obj.setData(1, "Aarav Sharma");

    // Pass by Value
    printByValue(obj);
    cout << "After printByValue function: ";
    obj.display(); // Name remains unchanged

    // Pass by Reference
    printByReference(obj);
    cout << "After printByReference function: ";
    obj.display(); // Name is now "Modified"
    system("pause");
    return 0;
}
