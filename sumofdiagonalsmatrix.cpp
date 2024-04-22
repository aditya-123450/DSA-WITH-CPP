#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int A[4][4], sum = 0;

    cout << "Enter the elements of the matrix : " << endl;
    for (y = 0; y < 4; y++)
    {
        for (x = 0; x < 4; x++)
        {
            cout << "Element " << y + 1 << "," << x + 1 << ":";
            cin >> A[y][x]; // Fix indices for accessing array elements
        }
    }

    // Sum of either of the diagonal elements.
    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 4; y++)
        {
            if (x == y || y == 4 - (x + 1)) // Fix condition
            {
                sum += A[y][x]; // Fix indices for accessing array elements
            }
        }
    }

    cout << "Sum of either of the diagonal elements is : " << sum;

    return 0;
}
