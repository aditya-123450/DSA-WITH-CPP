#include <iostream>
using namespace std;
int cube(int x); //The prototype.
int main()
{
int a;
cout << "Enter an integer : ";
cin>>a;
cout << "The cube of " << a << " is : " << cube(a) << endl; //Call the function cube(a).
}
//Defining the function.
int cube(int x)
{
int y;
y=x*x*x;
return(y);
}
