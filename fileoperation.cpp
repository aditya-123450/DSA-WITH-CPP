#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char c,fname[10];
    ofstream out;
    cout<<"Enter file name:";
    cin>>fname;
    out.open(fname);
    cout<<"Enter contents to store in file(enter # at end):";
    while((c=getchar())!='#')
    {
        out<<c;
    }
    out.close();
    
}