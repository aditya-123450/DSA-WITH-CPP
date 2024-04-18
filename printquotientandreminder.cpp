#include <iostream>
using namespace std;
int main()
{
int x,y,quotient,remainder;
cout << "Enter 2 integers greater than 0 : ";
cin>>x>>y;
quotient=x/y;
remainder=x-(quotient*y);
cout << "Quotient of " << x << " & " << y << " = " << quotient << "\n";
cout << "Remainder" << " = " << remainder << "\n";
return 0;
}
