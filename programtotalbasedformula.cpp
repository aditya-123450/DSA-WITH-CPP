//Program to enter an integer and print its
//total value based on the formula
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float factorial=1;
float num,tot,term,total;
int i,n=20,index,j=1;
cout << "Enter a single-digit integer : \n";
cin>>num;
tot=num;
total=num;
for(i=2,index=3;i<=n;i++,index+=2)
{
for(j=1,factorial=1;j<=index;j++)
factorial*=j;
tot=tot*pow((double)(-1),(double)(2*i-1))*num*num;
term=tot/factorial;
total+=term;
}
cout << "Total = " << total << endl;
return 0;
}
