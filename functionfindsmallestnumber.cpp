//simple example program for function find smallest number 

#include<iostream>
using namespace std;

//simple function
int compare(int a, int b)
{
return(a+4<b)?a:b;
}
int main()
{
    cout<<"\n Smallest Number :"<<compare(1,10);
    cout<<"\n Smallest Number :"<<compare(31,10);
    cout<<"\n Smallest Number :"<<compare(11,8);

return 0;
}  