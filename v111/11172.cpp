// UVa Online Judge
// Problem 11172 - Relational Operator
// Written by Tian Zhou
// Created 2/6/13
// Last Modified 2/6/13

#include <iostream>
using namespace std;

int main()
{
    int cases;
    int n1, n2;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> n1 >> n2;
        if (n1 < n2)
            cout << "<";
        else if (n1 > n2)
            cout << ">";
        else
            cout << "=";

        cout << endl;
    }

    return 0;
}
