// UVa Online Judge
// Problem 10340 - All in All
// Written by Tian Zhou
// Created 9/20/13
// Last Modified 9/20/13

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    int i, j;
    while (cin >> a >> b)
    {
        i = 0;
        j = 0;

        while (i < a.size() && j < b.size())
        {
            if (a[i] == b[j++])
                i++;
        }

        if (i == a.size())
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}