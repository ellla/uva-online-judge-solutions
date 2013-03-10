// UVa Online Judge
// Problem 11547 - Automatic Answer
// Written by Tian Zhou
// Created 3/5/13
// Last Modified 3/5/13

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int num;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        num = 315 * num + 36962;
        cout << (abs(num) / 10) % 10 << endl;
    }

    return 0;
}
