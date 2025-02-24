#include <iostream>
class MyClass
{
private:
int num1, num2, sum;
public:
MyClass(int a, int b) // Parameterized constructor to initialize num1 and num2
{
num1 = a;
num2 = b;
sum = num1 + num2;
}
void displaySum() // Function to display the sum
{
std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
}
};
int main()
{
int n1, n2;
std::cout << "Enter two numbers: ";
std::cin >> n1>>n2;
MyClass obj1(n1, n2); // Creating an object with parameters
obj1.displaySum(); // Displaying the sum
system("pause");
return 0;
}