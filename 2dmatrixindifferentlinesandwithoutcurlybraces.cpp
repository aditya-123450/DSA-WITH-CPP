#include<iostream>
using namespace std;
int main()
{
int m = 2, n = 3;
int mat[][3] = { {1, 2, 3},
{4, 5, 6},
};
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
// Prints ‘ ‘ if j != n-1 else prints ‘\n’
cout << mat[i][j] << " \n"[j == n-1];
return 0;
}
