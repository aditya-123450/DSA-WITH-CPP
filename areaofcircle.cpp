#include<iostream>
using namespace std;
int main(){
    float radius;
    const float pi=3.141592;
    float area;

    cout<<"enter the radius  of the circle: ";
    cin>>radius;

    area = pi * radius * radius;

    cout<<" the area of the circle is:" << area << endl;

    return 0;
}
