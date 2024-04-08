#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //variable decleration
    int a;

    //get input value
    cout<<"Enter the Number: ";
    cin>>a;

    cout<<"List of prime number below"<<a<<endl;

    //for loop block for find prime number
    for(int i=2;i<a;i++)
    {
        bool prime=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)cout<<i<<endl;
    }
    return 0;
}