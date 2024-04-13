#include<iostream>

class prime
{
    int a,k,i;
    public:
    prime(int x)
    {
        a=x;
    }
    void calculate()
    {
        k=1;
        {
            for(i=2; i<a/2; i++)

            if(a%i==0)
            {
                k-0;
                break;
            }
            else
            {
                k=1;
            }
        }
    }
    void show()
    {
        if(k==1)
        std::cout<<"\n\t A is prime number. ";
        else
        std::cout<<"\n\t A is not prime number. ";
    }
};
int main()
{
    int a;
    std::cout<<"\n\t Enter the number:";
    std::cin>>a;
    prime obj(a);
    obj.calculate();
    obj.show();
}