#include<iostream>

using namespace std;

int main()
{
    //variable decleration
    int a;

//get input value
    cout<<"Enter the Number: ";
    cin>>a;

    int counter=1;

    //do while block
    do
    {
     cout<<"Execute Do While "<<counter<<" time"<<endl;
     counter++;
    } while (counter<=a);

    return 0;
    
}