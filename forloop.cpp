#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    //variable declaration 
    int a;

    //get input value
    cout<<"Enter the Number:";
    cin>>a;

    //for loop block
    for(int counter=1;counter<=a;counter++)
    {
        cout<<"Execute "<<counter<<" time"<<endl;
    }

    //wait for output screen
    getch();
    return 0;
}