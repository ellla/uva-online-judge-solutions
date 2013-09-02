// UVa Online Judge
// Problem 11364 - Parking
// Written by Tian Zhou
// Created 9/1/13
// Last Modified 9/1/13

#include <iostream>
using namespace std;

int main()
{
    int cases;
    int n;
    int min;
    int max;
    int pos;
    int dis;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> n;
        min = 100;
        max = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> pos;
            
            if (pos < min)
                min = pos;
            if (pos > max)
                max = pos;
        }

        dis = 2 * (max - min);
        cout << dis << '\n';
    }
    return 0;
}
