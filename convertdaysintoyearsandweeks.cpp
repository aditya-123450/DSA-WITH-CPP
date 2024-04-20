//Program to convert days into years and weeks
#include <iostream>
using namespace std;  
int main()
{
int days,years,weeks,num1;
cout << "Enter the number of days : " << endl;
cin>>days;
years=days/365;
num1=days-(years*365);
weeks=days/7;
num1=days-(weeks*7);
cout << days << " days = " << endl;
cout << weeks << " weeks OR " << endl;
cout << years << " years." << endl;
}
