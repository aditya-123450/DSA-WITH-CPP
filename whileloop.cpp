#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //variable declaration 
    int a;

    //get input value
    cout<<"Enter the Number: ";
    cin>>a;

    int counter=1;

    //while loop block
    while(counter<=a)
    {
        cout<<"Execute While "<<counter<<" time"<<endl;
        counter++;
    }
    
    return 0;
}