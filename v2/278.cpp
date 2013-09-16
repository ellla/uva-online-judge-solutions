// UVa Online Judge
// Problem 278 - Chess
// Written by Tian Zhou
// Created 9/15/13
// Last Modified 9/15/13

#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int cases;
    char type;
    int m, n;
    int ans;

    scanf("%d", &cases);
    while (cases--)
    {
        scanf("\n%c %d %d", &type, &m, &n);

        switch (type)
        {
            case 'r':
            case 'Q':
                printf("%d\n", min(m, n));
                break;
            case 'k':
                printf("%d\n", (n * m + 1) / 2);
                break;
            case 'K':
                printf("%d\n", ((m + 1) / 2) * ((n + 1) / 2));
                break;
        }
    }

    return 0;
}