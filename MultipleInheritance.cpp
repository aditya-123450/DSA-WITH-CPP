#include<iostream>
#include<conio.h>

class student
{
    protected:
    int rno,m1,m2;
     public:
      void get()
      {
        std::cout<<"Enter the Roll no: ";
        std::cin>>rno;
        std::cout<<"Enter the two marks :";
        std::cin>>m1>>m2;
}
};
class sports
{
    protected:
    int sm;    //sm=sports marks
    public:

    void getsm()
    {
        std::cout<<"\n Enter the sports marks: ";
        std::cin>>sm;
    }
};
class statement:public student,public sports
{
    int tot,avg;
    public:
    void display()
    {
        tot=(m1+m2+sm);
        avg=tot/3;
        std::cout<<"\n\n\t Roll No :"<<rno<<"\n\tTotal :"<<tot;
        std::cout<<"\n\t Average :"<<avg;
    }
};
int main()
{
    
    statement obj;
    obj.get();
    obj.getsm();

    obj.display();
    getch();
}
