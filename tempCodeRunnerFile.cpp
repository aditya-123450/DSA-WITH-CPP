#include<iostream>
using namespace std;
int main(){

    float eng,phy,chem,maths,comp;
    float total,percentage;

    cout<<"enter the marks of 5 subject:\n";
    cin>>eng>>phy>>chem>>maths>>comp;

    total=eng+phy+chem+maths+comp;
    percentage=(total/500.0)*100;

    cout<<"total marks"<<total<<endl;
    cout<<"percentage="<<percentage<<endl;
    return 0;
}