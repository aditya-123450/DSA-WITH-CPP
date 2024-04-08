//Factorial using function program

#include<iostream>
using namespace std;

//function 
long factorial(int);

int main()
{
    //variable decleration
    int counter,n;

    //get input value
    cout<<"Enter the Number: ";
    cin>>n;

    //factorial fuction call
    cout<<n<<" Factorial value Is "<<factorial(n);

    return 0;
}

//factorial function
long factorial(int n)
{
    int counter;
    long fact = 1;

    //for loop block
    for(int counter=1;counter<=n;counter++)
    {
        fact=fact*counter;
    }
    return fact;
}