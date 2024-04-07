#include<iostream>
using namespace std;

class example {
    //variable declaration
    int a,b;
    public:

    //constructor without argument
    example() {

        //assign values in constructor
        a=50;
        b=100;
        cout<<"\n Im Constructor";
    }

    //constructor with argument
    example(int x,int y) {

    //assign values in constructor
    a=x;
    b=y;
    cout<<"\n Im constructor";
    }

void Display(){
    cout<<"\n values: "<<a<<"\t"<<b;
}
};

int main() {
example object(10,20);
example object2;

//constructor invoked.
object.Display();
object2.Display();

return 0;
}