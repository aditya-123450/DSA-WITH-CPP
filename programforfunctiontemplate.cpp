#include<iostream>

template<class t>

void swap(t &x,t &y)
{
    t temp=x;
    x=y;
    y=tamp;
}
void fun(int a,int b,float c,float d)
{
    cout<<"\n a and b before swapping:"<<a<<"\t"<<b;
    swap(a,b);
    cout<<"\n a and b after swapping: "<<a<<"\t"<<b;
    cout<<"\n\n c and d before swapping: "<<c<<"\t"<<d;
    swap(c,d);
    cout<<"\n c and d after swapping:"<<c<<"\t"<<d;
    
}
void main()
{
    int a,b;
    float c,d;
    cout<<"Enter A,B values(integer):";
    cin>>a>>b;
    out<<"Enter C,D values(float):";
    cin>>c>>d;
    fun(a,b,c,d);

}