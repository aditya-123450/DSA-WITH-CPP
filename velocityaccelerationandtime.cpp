#include <iostream>
using namespace std;
int main()
{
int v,u,a,t;
cout << "Enter the velocity, acceleration, time as integers : " << endl;
cin>>u>>a>>t;
v=u+a*t;
cout << "The final velocity is " << v << "." << endl;
}