#include<iostream>
#include<stdlib.h>

#define pi 3.14
class fn
{
    public:
    void area(int); //circle
    void area(int,int); //rectangle
    void area(float ,int,int); //trianglr
};
void::fn::area(int a)
{
    std::cout<<"Area of Circle: "<<pi*a*a;
}
void fn::area(int a,int b)
{
    std::cout<<"Area of rectangle: "<<a*b;
}
void fn::area(float t,int a,int b)
{
 std::cout<<"Area of triangle: "<<t*a*b;
}
int main()
{
    int ch;
    int a,b,r;
    fn obj;
    std::cout<<"\n\t\t function overloading";
    std::cout<<"\n 1.Area of circle \n 2. Area of rectangle \n 3. Area of Triangle \n 4. Exit \n:  ";
    std::cout<<"Enter your choice: ";
    std::cin>>ch;

    switch (ch)
    {
    case 1:
       std::cout<<"Enter Radius of the circle: ";
        std::cin>>r;
        obj.area(r);
        break;
        case 2:
       std::cout<<"Enter slide of rectangle: ";
        std::cin>>a>>b;
        obj.area(a,b);
        break;
        case 3:
       std::cout<<"Enter side of the Trianglr: ";
        std::cin>>a>>b;
        obj.area(0.5,a,b);
        break; 
        exit(0);
    
    }
}


