#include <iostream>
using namespace std;
class construct
{
public:
float area;
construct() // Constructor with no parameters
{
area = 0;
}
construct(int a, int b) // Constructor with two parameters
{
area = a * b;
}
void disp()
{
cout<< area<< endl;
}
};
int main()
{
// Constructor Overloading with two different constructors of class name
construct o;
construct o2( 10, 20);
o.disp();
o2.disp();
system("pause");
return 1;
}