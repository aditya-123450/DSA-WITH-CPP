//simple class program for find prime number

#include<iostream>
using namespace std;

//class declearation
class prime 
{
    //member variable declearation
    int a,k,i;
    public:

    prime(int x)
    {
        a=x;
    }
    //object creation for class
    void calculate()
    {
        k=1;
        {
        for(i=2;i<=a/2;i++)
        if(a%i==0)
        {
            k=0;
            break;
        }
        else
        {
            k=1;
        }
        }
}
   void show()
   {
    if(k==1)
    cout<<"\n"<<a<<" is Prime Number.";
    else
    cout<<"\n"<<a<<"is Not Prime Number.";
   }
    };

    //main function
    int main()
    {
        int a;
        cout<<"Enter the Number: ";
        cin>>a;

        //object creation for class
        prime obj(a);

        //call member functions
        obj.calculate();
        obj.show();

        return 0;
    }
   
   