#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
      void getvalue()
      {
        cout<<"Enter the value of complex number a,b: ";
        cin>>a>>b;
      }
      complex operator+(complex ob)
      {
        complex t;
        t.a=a+ob.a;
        t.b=b+ob.b;
        return(t);
      }
      complex operator-(complex ob)
      {
         complex t;
        t.a=a-ob.a;
        t.b=b-ob.b;
        return(t);
      }
      void display()
      {
        std::cout<<a<<"+"<<b<<"i"<<"\n";
      }
};

int main()
{
    complex obj1,obj2,result,result1;

    obj1.getvalue();
    obj2.getvalue();
    result=obj1+obj2;
    result1=obj1-obj2;

    cout<<"Input values:\n";
    obj1.display();
    obj2.display();
    cout<<"result: ";
    result1.display();
}