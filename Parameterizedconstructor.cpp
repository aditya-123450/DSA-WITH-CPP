#include<iostream>
using namespace std;

class example {
 int a,b;
 public:

 //constructor
 example(int x,int y) {
 

 //assign values in constructor
 a=x;
 b=y;
 cout<<"Im constructor\n";
} 
void Display(){
    cout<<"Values: "<<a<<"\t"<<b;
}
};
int main() {

example object(10,20);

//constructor invoked.
object.Display();

return 0;
}