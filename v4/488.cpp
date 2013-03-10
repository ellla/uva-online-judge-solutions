// UVa Online Judge
// Problem 488 - Triangle Wave
// Written by Tian Zhou
// Created 2/5/13
// Last Modified 2/5/13

#include <iostream>
using namespace std;

void printWave(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }

    for (int i = a - 1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << i;

        if (i != 0)
            cout << endl;
    }
}

int main()
{
    int cases;
    int a;
    int f;

    cin >> cases;
    
    for (int i = 1; i <= cases; i++)
    {
        cin >> a >> f;

        for (int j = 1; j <= f; j++)
        {
            printWave(a);

            if (j != f)
                cout << endl;
        }

        if (i != cases)
            cout << endl;
    }

    return 0;
}
