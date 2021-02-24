
/****************************************************
*
* FileName: maxTemplate.cpp
* Purpose: Demonstrate the use of function templates
*
********************************************************/
#include <iostream>
#include <string>
using namespace std;
//Make a template out of the prototype
template <typename T>
T Max(T one, T two);
int main()
{
int i_one = 3, i_two = 5;
cout << "The max of two integers  " << i_one << " and " << i_two << " is "
<< Max(i_one, i_two) << endl;
double x1 = 3.5, x2 = 10.3;
cout << "The max of two doubles   " << x1 << " and " << x2 << " is "
<< Max(x1, x2) << endl;
string a = "asd", b = "qwe";
cout << "The max of two strings   " << a << " and " << b << " is "
<< Max(a, b) << endl;

//Test your template on float and string types
return 0;
}
//Make a template out of this function. Don't forget the return type.
template <typename T>
T Max(T one, T two)
{
T biggest;
if (one < two)
{
biggest = two;
}
else
{
biggest = one;
}
return biggest;
}
