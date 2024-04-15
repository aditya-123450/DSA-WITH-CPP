#include<iostream>

using namespace std;
class complex
{
int a,b;
public:
complex(): a(0),b(0){}
void getvalue()
{
cout<<"Enter the Two Numbers:";
cin>>a>>b;
}
void operator++()
{
a++;
b++;
}
void operator-()
{
a = -a;
b = -b;
}
void display()
{
cout<<a<<"+\t"<<b<<"i"<<endl;
}
};
int main()
{

complex obj;
obj.getvalue();

cout<<"Increment Complex Number\n";
obj.display();

cout<<"Decrement Complex Number\n";
obj.display();

}
