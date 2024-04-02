#include<iostream>
using namespace std;
int main(){

    float eng,phy,chem,maths,comp;
    float total,percentage,average;

    cout<<"enter the marks of 5 subject:\n";
    cin>>eng>>phy>>chem>>maths>>comp;

    total=eng+phy+chem+maths+comp;
    percentage=(total/500.0)*100;
    average=(total/5.0);

    cout<<"total marks"<<total<<endl;
    cout<<"percentage="<<percentage<<endl;
    cout<<"average marks="<<average <<endl;

    //passing marks of student

  if (percentage>=65)
  cout<<"first division";

  else if (percentage>=50 && percentage<=60)
  cout<<"second division";

  else if (percentage>=45 && percentage<=50)
  cout<<"third division";

  else
  cout<<"sorry yor are fail";
    
}