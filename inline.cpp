#include <iostream>
using namespace std;
// Inline function to calculate the square of a number
inline int square(int num)
{
return num * num;
}
int main()
{
int x = 5;
int result;
// Calling the inline function
result = square(x);
cout << "Square of " << x << " is: " << result << endl;
system("pause");
return 0;
}