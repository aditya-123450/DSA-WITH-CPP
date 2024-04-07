//program for copy constructor

#include<iostream>
using namespace std;

class Example {

    //variable declearation 
    int a,b;
    public:

    //constructor with argument 
    Example(int x,int y) {

    //assign values in constructor
    a=x;
    b=y;
    cout<<"\n Im constructor ";
    }

    void Display() {
        cout<<"\n values :"<<a<<"\t"<<b;
    }
};

int main()  {
Example Object(10,20);

//copy constructor
Example Object2=Object;

//constructor invoked
Object.Display();
Object2.Display();

return 0;
}

