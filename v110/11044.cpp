// UVa Online Judge
// Problem 11044 - Searching for Nessy
// Written by Tian Zhou
// Created 3/10/13
// Last Modified 3/10/13

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    int n, m;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        cout << (n / 3) * (m / 3) << endl;
    }

    return 0;
}
