#include <iostream>
using namespace std;
int main()
{
char charac;
cout << "Enter your letter : " << endl;
cin>>charac;
cout << "The 2 letters are : " << endl;
cout << (char)(charac-1) << endl;
cout << (char)(charac+1) << endl;
}