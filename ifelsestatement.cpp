#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //variable decleration
    int a;

    //get input value
    cout<<"Enter the Number:";
    cin>>a;

    //if condition check
    if(a>10)
    {
        //block for condition success
        cout<<a<<" Is Greater than 10";
    }
else
{
    //block for condition fail
    cout<<a<<" Is less than 10";
}

//wait for output screen
getch();

return 0;
}