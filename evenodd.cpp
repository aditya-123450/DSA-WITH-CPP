
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << "this is even"<<endl;
  else
    cout << "this number is odd"<<endl;

  return 0;
}
