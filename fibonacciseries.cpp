#include<iostream>
using namespace std;

int main()
{
    //varaiable decleration 
    int counter,n;
    long last=1,next=0,sum;

    //get input value
    cout<<"Enter the Number: ";
    cin>>n;
     
     //fibonacci series calculation
     while(next<n/2)
     {
        cout<<last<<"\n";
        sum=next+last;
        next=last;
        last=sum;
     }

     return 0;
}