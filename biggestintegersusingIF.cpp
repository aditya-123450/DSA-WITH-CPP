#include <iostream>
using namespace std;
int main()
{
int x,y,z,biggest;
cout << "Enter 3 integers : ";
cin>>x>>y>>z;
biggest=x;
if(y>biggest)
biggest=y;
if(z>biggest)
biggest=z;
cout << "The biggest integer out of the 3 integers you typed ";
cout << x << ", " << y << " & " << z << " is : " << "\n" << biggest << "\n";
return 0;
}
