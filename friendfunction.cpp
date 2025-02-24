#include <iostream>
using namespace std;
class Base;
class FriendClass
{
public:
void friendFunction(Base& obj);
};
class Base
{
private:
int private_variable;
protected:
int protected_variable;
public:
Base()
{
private_variable = 10;
protected_variable = 99;
}
// Friend function declaration inside another class
friend void FriendClass::friendFunction(Base& obj);
};
// Friend function definition
void FriendClass::friendFunction(Base& obj)
{
cout << "Private Variable: " << obj.private_variable << endl;
cout << "Protected Variable: " << obj.protected_variable;
}
// Driver code
int main()
{
Base object1;
FriendClass friendObj;
friendObj.friendFunction(object1);
system("pause");
return 0;
}