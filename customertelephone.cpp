#include <iostream>
using namespace std;
int main()
{
long int units,charge=0;
float total;
const int rent=25;
cout << "Enter the number of units used : ";
cin>>units;
if(units>200)
charge=(units-200)*20+150*40+50*60;
else if(units>50)
charge=(units-50)*40+50*60;
else
charge=units*60;
total=0.01*charge+rent;
cout << "You have used " << units << " units." << endl;
cout << "Your total telephone bill is $" << total;
return 0;
}
