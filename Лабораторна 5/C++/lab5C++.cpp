#include <iostream>
#include <math.h>
using namespace std;

int a = 0;
int k = 0;

int main()
{
    cout << "Визначення перших 10 п'ятизначних паліндромів, що є простими числами:\n\n";
    for (k = 10000; k <= 99999; k++)
    {
        if (a < 10)
        {
            if (((k / 10000) == (k % 10)) && (((k / 1000) % 10) == ((k % 100) / 10)))
            {
                int i = 2;
                while (k % i != 0)
                {
                    i++;
                }
                if (i == k)
                {
                    cout << k << "\n";
                    a++;
                }
            }
        }
    }
}