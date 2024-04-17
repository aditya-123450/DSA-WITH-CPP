#include<iostream>
using namespace std;
#include<ctype.h>
#include<string>
#include<fstream>
#include<conio.h>
int main()
{
char c,u;
char fname[10];

ofstream out;
cout<<"Enter File Name:";
cin>>fname;
out.open(fname);
cout<<"Enter the text(Enter # at end)\n"; //write contents to file
while((c=getchar())!='#')
{
u=c-32;
out<<u;
}
out.close();
ifstream in(fname); //read the contents of file
cout<<"\n\n\t\tThe File contains\n\n";
while(in.eof()==0)
{
in.get(c);
cout<<c;
}

}
