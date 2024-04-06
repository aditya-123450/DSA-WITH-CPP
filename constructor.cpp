#include<iostream>

using namespace std;

class example{
    //variable decleration
    int a,b;
    public:
    //constructor
    example()  {
    //assign values in constructor
    a=15;
    b=20;
    cout<<"Im constructor\n";
    }

void Display(){
    cout<<"values: "<<a<<"\t"<<b;
}
};
int main(){
    example object;
    //constructor invoked
    object.Display();
    return 0;
}





