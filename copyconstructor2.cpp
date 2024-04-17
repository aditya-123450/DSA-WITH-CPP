#include<iostream>

class copy
{
int var,fact;
public:
copy(int temp)
{
var = temp;
}
double calculate()
{
fact=1;
for(int i=1;i<=var;i++)
{
fact = fact * i;
}
return fact;
}
};
int main()
{
int n;
std::cout<<"\n\tEnter the Number : ";
std::cin>>n;
copy obj(n);
copy cpy=obj;
std::cout<<"\n\t"<<n<<" Factorial is:"<<obj.calculate();
std::cout<<"\n\t"<<n<<" Factorial is:"<<cpy.calculate();
}