//simple program for function find factorial
#include<iostream>
using namespace std;

//simple factorial function
int factorial(int var)
{
    int fact=1;
    for(int i=1;i<=var;i++)
    fact=fact*i;
    return fact;
}
int main(){
cout<<" 10 Factorial Number: "<<factorial(10);
return 0;
}