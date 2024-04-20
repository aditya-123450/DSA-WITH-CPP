/*Program to enter three integers and
output the smallest integer using IF*/
#include <iostream>
using namespace std;
int main()
{
int x,y,z,smallest;
cout << "Enter 3 integers : ";
cin>>x>>y>>z;
smallest=x;
if(y<smallest)
smallest=y;
if(z<smallest)
smallest=z;
cout << "The smallest integer out of the 3 integers you typed ";
cout << x << ", " << y << " & " << z << " is : " << "\n" << smallest << "\n";
return 0;
}
