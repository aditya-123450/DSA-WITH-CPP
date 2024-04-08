#include<iostream>
using namespace std;

//function
long factorial(int);

int main()
{
    //variable declaration
    int counter,n;

    //get input value
    cout<<"Enter the Number: ";
    cin>>n;

    //factorial function call
    cout<<n<<" factorial value Is "<<factorial(n);

    return 0;
}

//factorial recursion function 
long factorial(int n)
{
    if(n==0)
    return 1;
    else
    return(n*factorial(n-1));
}