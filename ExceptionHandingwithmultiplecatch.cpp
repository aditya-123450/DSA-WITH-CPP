//simple program for exception handiling with multiple catch using c++
#include<iostream>

void test(int x)
{
    try
    {
        if(x>0)
        throw x;
        else 
            throw 'x';
    }
    catch(int x)
    {
        std::cout<<" \nCatch a integer and that intrger is : \n"<<x;
    }
    catch(char x)
    {
        std::cout<<"\n catch a character and that character is : \n "<<x;
    }
}
int main()
{
    std::cout<<"Testing multiple catches \n: ";
    test(10);
    test(0);
}
