#include<iostream>
using namespace std;

//class decleration
class person
{
    //access-specifier
    public:

    //variable declaration
    string name;
    int number;
};

//main function
int main()
{
    //object creation for class
    person obj;

    //get input values for object variables
    cout<<"Enter the Name: ";
    cin>>obj.name;

    cout<<"Enter the Number: ";
    cin>>obj.number;


    //show the  output 
    cout<<obj.name<<":"<<obj.number<<endl;

    return 0;
}