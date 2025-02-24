#include <iostream>
class Number
{
private:
int value;
public:
// Set initial value
void setValue(int val)
{
value = val;
}
Number operator-() // Overloading unary minus operator
{
Number result;
result.value = -value;
return result;
}
void display()
{
std::cout << "Value: " << value << std::endl;
}
};
int main()
{
// Create a Number object
Number num1;
num1.setValue(10);
std::cout << "Original "; // Display the original value
num1.display();
// Use unary minus operator overloading
Number num2 = -num1; //num1.operator-();
// Display the negated value
std::cout << "After Unary Minus ";
num2.display();
system("pause");
return 0;
}