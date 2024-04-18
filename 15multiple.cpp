#include <iostream>
using namespace std;
int main()
{

int x;
cout << "Enter an integer less than 2185 : ";
cin>>x;
cout << "The first 15 multiples of " << x << " are : ";
for(int y=1;y<16;y++)
cout << "\n" << x << "x" << y << "=" << x*y;
return 0;
}
