//program for inline function 
#include<iostream>
using namespace std;

class line
{
    public:
          inline float multiplication(float x,float y)
          {
            return(x*y);
          }
          inline float cube(float x)
          {
            return(x*x*x);
          }
};
int main()
{
    line obj;
    float val1,val2;
   
    cout<<"Enter two values: ";
    cin>>val1>>val2;
    cout<<"\nMultiplication value is: "<<obj.multiplication(val1,val2);
    cout<<"\n\ncube value is :"<<obj.cube(val1)<<"\t"<<obj.cube(val2);
    
}