#include <iostream>
#include <process.h>
using namespace std;
int main()
{
int num1,x;
cout << "Enter an integer : " << endl;
cin>>num1;
for(x=2;x<num1;x++)
{
if(num1%x==0)
{
cout << num1 << " is a composite number." << endl;
exit(0);
}
else
{
cout << num1 << " is a prime number." << endl;
exit(0);
}
}
}
