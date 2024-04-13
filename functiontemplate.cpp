#include<iostream>

template<class t>

void swap(t&x,t&y)
{
    t temp=x;
    x=y;
    y=temp;
}
void fun(int a, int b, float c,float d)
{
   std::cout<<"\n a and b before swapping: "<<a<<"\t"<<b;
    swap(a,b);
    std::cout<<"\n a and b after swapping: "<<a<<"\t"<<b;
    std::cout<<"\n\n c and d before swapping: "<<c<<"\t"<<d;
    swap(c,d);
    std::cout<<"\n c and d after swapping: "<<"\t"<<d;
}
int main()
{
    int a,b;
    float c,d;
    
    std::cout<<"Enter A,B values(integer):";
    std::cin>>a>>b;
    std::cout<<"Enter C,D values(integer):";
    std::cin>>c>>d;
    fun(a,b,c,d);
    
    
}