#include <iostream>
using namespace std;
int main()
{
long int num1,num2,rnum=0;
cout << "Enter an integer : " << endl;
cin>>num1;
num2=num1;
do
{
rnum=rnum*10;
int digit=num1%10;
rnum+=digit;
num1/=10;
}
while(num1);
cout << "The integer you typed is " << num2 << "." << endl;
cout << "The reversed integer is " << rnum << "." << endl;
}
