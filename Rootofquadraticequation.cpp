#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float a,b,c,d,root1,root2;
cout << "Enter the 3 coefficients a, b, c : " << endl;
cin>>a>>b>>c;
if(!a){
if(!b)
cout << "Both a and b cannot be 0 in ax^2 + bx + c = 0" << "\n";
else
{
d=-c/b;
cout << "The solution of the linear equation is : " << d << endl;
}
}
else
{
d=b*b-4*a*c;
if(d>0)
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
cout << "The first root = " << root1 << endl;
cout << "The second root = " << root2 << endl;
}
return 0;
}
