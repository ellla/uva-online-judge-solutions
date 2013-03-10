// UVa Online Judge
// Problem 11727 - Cost Cutting
// Written by Tian Zhou
// Created 3/6/13
// Last Modified 3/6/13

#include <iostream>
using namespace std;

int find_mid(int a, int b, int c)
{
    if (a < b && b < c)
        return b;
    else if (a < c && c < b)
        return c;
    else if (b < a && a < c)
        return a;
    else if (b < c && c < a)
        return c;
    else if (c < a && a < b)
        return a;
    else
        return b;
}

int main()
{
    int n;
    int a, b, c;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        cout << "Case " << i << ": " << find_mid(a, b, c) << endl;
    }

    return 0;
}
