#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n value: ";
    cin >> n;
    int* arraya = new int[n]();
    int* arrayb = new int[n]();
    for (int i = 0; i < n; i++)
    {
        arraya[i] = i * i + 76;
        arrayb[i] = 100 - i;
    }
    cout << "\nArray 1:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arraya[i] << " ";
    }
    cout << "\nArray 2:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arrayb[i] << " ";
    }

    for (int i1 = 0; i1 < n; i1++)
    {
        for (int i2 = 0; i2 < n; i2++)
        {
            if (i1 * i1 + 76 == 100 - i2)
            {
                arraya[i1] = 0;
            }
        }
    }
    cout << "\n\nAnswer: "
        << "\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arraya[i] << " ";
    }
}