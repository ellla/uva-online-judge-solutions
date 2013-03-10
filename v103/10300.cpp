// UVa Online Judge
// Problem 10300 - Ecological Premium
// Written by Tian Zhou
// Created 2/4/13
// Last Modified 2/4/13

#include <iostream>
using namespace std;

int main()
{
    int cases;
    int farmers;
    int a;
    int b;
    int c;
    int sum;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
	cin >> farmers;
        sum = 0;
        for (int j = 0; j < farmers; j++)
        {
            cin >> a >> b >> c;
            sum += a * c;
        }
        cout << sum << endl;
    }

    return 0;
}
