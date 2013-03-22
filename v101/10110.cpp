// UVa Online Judge
// Problem 10110 - Light, more light
// Written by Tian Zhou
// Created 3/22/13
// Last Modified 3/22/13

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, intpart;

    cin >> n;
    while (n != 0)
    {
        if (modf(sqrt(n), &intpart) == 0.0)
            cout << "yes\n";
        else
            cout << "no\n";

        cin >> n;
    }

    return 0;
}
