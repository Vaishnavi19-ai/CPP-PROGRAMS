#include <iostream>
#include <cstring>
using namespace std;
class Person
{
char name[50]; // Array for name
public:
Person(const char* name) // Constructor to initialize name
{
strcpy(this->name, name); // 'this' resolves conflict and copies the name
}
void display()
{
cout << "Name: " << this->name << endl;
}
};
int main()
{
Person p1("Ritesh"); // Create object
p1.display(); // Call method
system("pause");
return 0;
}