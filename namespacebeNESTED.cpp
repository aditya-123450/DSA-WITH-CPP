#include <iostream>
int x = 20;
namespace outer {
int x = 10;
namespace inner {
int z = x; // this x refers to outer::x
}
}
int main()
{
std::cout<<outer::inner::z; //prints 10
getchar();
return 0;
}
