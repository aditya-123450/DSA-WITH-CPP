/*. Program to identify if an input is a
symbol, digit or character*/
#include <iostream>
using namespace std;
int main()
{
char charac;
cout << "Enter your input : " << endl;
cin>>charac;
if(((charac>='A')&&(charac<='Z'))||((charac>='a')&&(charac<='z')))
cout << "Your input " << charac << " is a character." << endl;
else if((charac>='0')&&(charac<='9'))
cout << "Your input " << charac << " is a digit." << endl;
else
cout << "Your input " << charac << " is a symbol." << endl;
}
