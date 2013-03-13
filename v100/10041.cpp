// UVa Online Judge
// Problem 10041 - Vito's Family
// Written by Tian Zhou
// Created 3/11/13
// Last Modified 3/11/13

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int cases;
    int n;
    int *pos;
    int vpos;
    int dis;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> n;
        pos = new int[n];
        dis = 0;

        for (int i = 0; i < n; i++)
            cin >> pos[i];

        sort(pos, pos + n);

        if (n % 2 == 0)
            vpos = (pos[n / 2 - 1] + pos[n / 2]) / 2;
        else
            vpos = pos[n / 2];

        for (int i = 0; i < n; i++)
            dis += abs(vpos - pos[i]);

        cout << dis << endl;

        delete[] pos;
    }
    return 0;
}
