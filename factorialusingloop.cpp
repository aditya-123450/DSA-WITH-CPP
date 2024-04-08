#include<iostream>
using namespace std;

int main()
{
    //variable decleration
    int counter,n,fact=1;

    //get input value
    cout<<"Enter the Number: ";
    cin>>n;

    //for llop block
    for(int counter=1;counter<=n;counter++)
    {
        fact=fact*counter;
    }
    cout<<n<<" factorial value Is "<<fact;

    return 0;
}