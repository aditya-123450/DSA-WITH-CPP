#include <iostream>
using namespace std;
int main()
{
int a,b,x,y,num1,ct;
a=0;
b=1;
cout << "Enter the number of terms (less than 25) : " << endl;
cin>>num1;
cout << a << endl;
cout << b << endl;
for(ct=1;ct<=num1-2;ct++)
{
x=a+b;
cout << x << endl;
y=a;
a=b;
b=x;
}
}
