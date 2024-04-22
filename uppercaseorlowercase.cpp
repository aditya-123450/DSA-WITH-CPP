#include <iostream>
using namespace std;
int main()
{
char line[80];
int number_of_vowels,uc,lc,uv,lv;
uc=lc=uv=lv=0;
cout << "Enter your sentence : " << endl;
cin.getline(line,80);
for(int x=0; line[x]!='\0';x++)
{
if(line[x]=='A'||line[x]=='B'||line[x]=='I'||line[x]=='O'||line[x]=='U')
uv++;
else if(line[x]=='a'||line[x]=='e'||line[x]=='i'||line[x]=='o'||line[x]=='u')
lv++;
else if(line[x]>+65&&line[x]<=90)
uc++;
else if (line[x]>=97&&line[x]<=122)
lc++;
}
//Printing the output.
cout << "Uppercase Consonants = " << uc << "." << endl;
cout << "Lowercase Consonants = " << lc << "." << endl;
cout << "Uppercase Vowels = " << uv << "." << endl;
cout << "Lowercase Vowels = " << lv << "." << endl;
number_of_vowels=uv+lv;
cout << "Number of vowels = " << number_of_vowels << endl;
}
