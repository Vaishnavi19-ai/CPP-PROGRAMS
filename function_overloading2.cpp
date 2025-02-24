#include <iostream>
using namespace std;
// function with 2 parameters
void display(int var1, double var2)
{
cout << "Integer number: " << var1;
cout << " and double number: " << var2 << endl;
}
void display(double var) // function with double type single parameter
{
cout << "Double number: " << var << endl;
}
void display(int var) // function with int type single parameter
{
cout << "Integer number: " << var << endl;
}
int main()
{
int a = 5;
double b = 5.5;
display(a); // call function with int type parameter
display(b); // call function with double type parameter
display(a, b); // call function with 2 parameters
system("pause");
return 0;
}