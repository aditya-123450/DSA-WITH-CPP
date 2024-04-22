#include <iostream>
using namespace std;
int main()
{
int choice;
float ctemp,ftemp;
cout << "1.Celsius to Fahrenheit" << endl;
cout << "2.Fahrenheit to Celsius" << endl;
cout << "Choose between 1 & 2 : " << endl;
cin>>choice;
if (choice==1)
{
cout << "Enter the temperature in Celsius : " << endl;
cin>>ctemp;
ftemp=(1.8*ctemp)+32;
cout << "Temperature in Fahrenheit = " << ftemp << endl;
}
else
{
cout << "Enter the temperature in Fahrenheit : " << endl;
cin>>ftemp;
ctemp=(ftemp-32)/1.8;
cout << "Temperature in Celsius = " << ctemp << endl;
}
}