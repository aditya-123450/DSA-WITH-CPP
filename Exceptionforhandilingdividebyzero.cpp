//program for exception handling divide by zero 
#include<iostream>

int main()
{
    int a,b,c;
    float d;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    std::cout<<"Enter the value of b: ";
    std::cin>>b;
    std::cout<<"Enter the value of c: ";
    std::cin>>c;

    try
    {
        if((a-b)!=0)
        {
            d=c/(a-b);
            std::cout<<"Result is: "<<d;
        }
        else
        {
            throw(a-b);
        }
    }
    catch(int i)
    {
        std::cout<<"Answer is infinite because a-b is: "<<i;
    }
}