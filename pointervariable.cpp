#include<iostream>
using namespace std;
class Point {
private:
int x;
int y;
public:
Point(int i, int j); // Constructor
};
Point::Point(int i = 0, int j = 0) {
x = i;
y = j;
cout << "Constructor called";
}
int main()
{
Point t1, *t2;
return 0;
}