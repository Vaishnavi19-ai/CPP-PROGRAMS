#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string sname;
    float marks;

    void getData();
    void putData();
};

void Student::getData() {
    std::cout << "Enter Roll Number: ";
    std::cin >> rollno;
    std::cin.ignore();  // Clears leftover newline

    std::cout << "Enter Name: ";
    getline(cin, sname);

    std::cout << "Enter Marks: ";
    std::cin >> marks;
}

void Student::putData() {
    std::cout << "Roll Number: " << rollno << endl;
    std::cout << "Name: " << sname << endl;
    std::cout << "Marks: " << marks << endl;
}

int main() {
    Student obj1, obj2;

    std::cout << "Enter details for Student 1:" << endl;
    obj1.getData();

    std::cout << "\nEnter details for Student 2:" << endl;
    obj2.getData();

    std::cout << "\nDetails for Student 1:" << endl;
    obj1.putData();

    std::cout << "\nDetails for Student 2:" << endl;
    obj2.putData();
    system("pause");
    return 0;
}
