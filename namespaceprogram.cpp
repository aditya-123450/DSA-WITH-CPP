// program for Namespace
#include<iostream>
using namespace std;

//namespace namespacefirst
namespace namespacefirst
{
    int value=5;
}

//namespace namespacesecond
namespace namespacesecond
{
    double value = 3.1416;
}

int main(){
    //namespace namespacefirst variable usage
    cout<<"namespacefirst value: "<<namespacefirst::value<<endl;

    //namespace namespacesecond variable usage
    cout<<"namespacesecond value: "<<namespacesecond::value<<endl;
    return 0;
}