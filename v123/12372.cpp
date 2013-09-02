// UVa Online Judge
// Problem 12372 - Packing for Holiday
// Written by Tian Zhou
// Created 9/1/13
// Last Modified 9/1/13

#include <iostream>
using namespace std;

int main()
{
    int cases;
    int L, W, H;

    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        cin >> L >> W >> H;
        if (L > 20 || W > 20 || H > 20)
            cout << "Case " << i << ": bad\n";
        else
            cout << "Case " << i << ": good\n";
    }

    return 0;
}
