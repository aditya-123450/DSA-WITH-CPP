//Program to count the number of words and characters in a sentence
#include <iostream>
using namespace std;
int main()
{
int countch=0;
int countwd=1;
cout << "Enter your sentence in lowercase: " << endl;
char ch='a';
while(ch!='\r')
{    
if(ch=='')
countwd++;
else
countch++;
}
cout << "\n Words = " << countwd << endl;
cout << "Characters = " << countch-1 << endl;
}