#include<iostream>
#include<conio.h>

class student
{
    protected:
    int rno,m1,m2;
     public:
      void get();
      {
        cout<<"Enter the Roll no: ";
        cin>>rno;
        cout<<"Enter the two marks :";
        cin>>m1>m2;
}
};
class sports
{
    protected:
    int sm;    //sm=sports marks
    public:

    void getsm();
    {
        cout<<"\n Enter the sports marks: ";
        cin>>sm;
    }
};
class statement:public student,public sports
{
    int tot,avg;
    public:
    void display();
    {
        tot=(m1+m2+sm);
        avg=tot/3;
        cout<<"\n\n\t Roll No :"<<rno<<"\n\tTotal :"<<tot;
        cout<<"\n\t Average :"<<avg;
    }
};
void main()
{
    clrscr()
    statement obj;
    obj.get();
    obj.getsm();

    obj.display();
    getch();
}
