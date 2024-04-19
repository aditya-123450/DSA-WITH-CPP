#include <iostream>
using namespace std;
void value(int);
int main()
{
int x;
cout << "Enter an integer : ";
cin>>x;
cout << "The successor of " << x << " is ";
value(x);
}
void value(int x)
{
x++;
cout << x << "." << endl;
}
