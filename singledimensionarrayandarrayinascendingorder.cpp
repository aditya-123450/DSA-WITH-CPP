#include <iostream>
using namespace std;

int main()
{
    int array[10], t;

    // Input
    for (int x = 0; x < 10; x++) // Fix condition, declare x as int
    {
        cout << "Enter Integer No. " << x + 1 << ":" << endl;
        cin >> array[x];
    }

    // Sorting
    for (int x = 0; x < 10; x++) // Fix condition, declare x as int
    {
        for (int y = 0; y < 9; y++)
        {
            if (array[y] > array[y + 1])
            {
                t = array[y];
                array[y] = array[y + 1];
                array[y + 1] = t;
            }
        }
    }

    // Output
    cout << "Array in ascending order is : ";
    for (int x = 0; x < 10; x++) // Fix condition, declare x as int
    {
        cout << endl << array[x];
    }

    return 0;
}
