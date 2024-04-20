//write program to take the salary of the employee as a screen input from the user.
#include <iostream>
using namespace std;
int main()
{
int itrate;
float salary,itax,nsalary=0;
cout << "Enter the salary : ";
cin>>salary;
if(salary>15000)
{
itax=salary*30/100;
itrate=30;
}
else if(salary>=7000)
{
itax=salary*20/100;
itrate=20;
}
else
{
itax=salary*10/100;
itrate=10;
}
nsalary=salary-itax;
cout << "Salary = $" << salary << endl;
cout << "Your income tax @ " << itrate << "% = $" << itax << endl;
cout << "Your net salary = $" << nsalary << endl;
}