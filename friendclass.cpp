#include <iostream>
using namespace std;

class MyClass {
private:
    int pri_var;
protected:
    int prot_var;
public:
    MyClass() {
        pri_var = 10;
        prot_var = 99;
    }
    // Friend class declaration
    friend class F;
};

// Class F is a friend of MyClass, allowing access to private and protected members.
class F {
public:
    void display(MyClass& t) {
        cout << "The value of Private Variable = " << t.pri_var << endl;
        cout << "The value of Protected Variable = " << t.prot_var << endl;
    }
};

// Driver code
int main() {
    MyClass g;
    F fri;
    fri.display(g);
    system("pause");
    return 0;
}
