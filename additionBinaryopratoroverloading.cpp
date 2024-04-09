#include<iostream>
using namespace std;

class overloading
{
    int value;
    public:
    void setvalue(int temp)
    {
        value = temp;
    }
    overloading operator+(overloading ob)
    {
        overloading t;
        t.value=value+ob.value;
        return(t);
    }
    void display()
    {
        cout<<value<<endl;
    }
};
//main function
int main()
{
    overloading obj1,obj2,result;
    int a,b;

    cout<<"Enter the value of Number a,b: ";
    cin>>a>>b;
    obj1.setvalue(a);
    obj2.setvalue(b);

    result=obj1+obj2;

    cout<<"input values: \n";
    obj1.display();
    obj2.display();
    cout<<"result: ";
    result.display();
    return 0;
}