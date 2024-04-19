#include <iostream>
using namespace std;
int main()
{
int x;
float sinterest,principal,rate,time;
for(x=4;x>=0;x--)
{
cout << "Enter the principal, rate & time : " << endl;
cin>>principal>>rate>>time;
sinterest=(principal*rate*time)/100;
cout << "Principal = $" << principal << endl;
cout << "Rate = " << rate << "%" << endl;
cout << "Time = " << time << " years" << endl;
cout << "Simple Interest = $" << sinterest << endl;
}
}