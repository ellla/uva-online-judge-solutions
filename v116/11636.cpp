// UVa Online Judge
// Problem 11636 - Hello World!
// Written by Tian Zhou
// Created 3/17/13
// Last Modified 3/17/13

#include <iostream>
using namespace std;

int find(int n)
{
    int p = 0;
    int l = 1;

    while (l < n)
    {
        p++;
        l *= 2;
    }
    
    return p;
}

int main()
{
    int cases = 0;
    int n;
    
    cin >> n;
    while (n >= 0)
    {
        cases++;
        cout << "Case " << cases << ": " << find(n) << endl;
        cin >> n;
    }

    return 0;
}
