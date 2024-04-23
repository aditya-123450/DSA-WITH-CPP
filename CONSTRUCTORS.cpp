#include<iostream>
using namespace std;
class Point
{
private:
int x, y;
public:
/***Constructor****/
Point(int x1, int y1) { x = x1; y = y1; }
int getX() { return x; }
int getY() { return y; }
};
int main()
{
Point p1(10, 15); // constructor is called here
// Let us access values assigned by constructor
cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
return 0;
}
