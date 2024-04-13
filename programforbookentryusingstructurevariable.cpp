#include<iostream>
using namespace std;

struct books
{
    char name[20],auther[20];
}
a[50];
int main()
{
    int i,n;
    cout<<"no of books[less than 50]: ";
    cin>>n;
    cout<<"Enter the book details\n";
    cout<<"______________\n";
    for(i=0;i<n;i++)
    {
        cout<<"Details of book no"<<i+1<<"\n";
        cout<<"Book Name: ";
        cin>>a[i].name;
        cout<<"Book Auther: ";
        cin>>a[i].auther;
        cout<<"_____________\n";
    }
    cout<<"===============================================\n";
    cout<<"S.no\t|Book name\t|auther\n";
    cout<<"================================================\n";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<i+1<<"\t|"<<a[i].name<<"\t|"<<a[i].auther;
    }
    cout<<"\n==============================================";
    return 0;
}