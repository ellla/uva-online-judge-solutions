// UVa Online Judge
// Problem 10079 - Pizza Cutting
// Written by Tian Zhou
// Created 9/20/13
// Last Modified 9/20/13

#include <cstdlib>
#include <cstdio>

int main()
{
    long long n;
    while (scanf("%lld", &n) && n >= 0)
    {
        printf("%lld\n", (n * n + n + 2) / 2);
    }
    return 0;
}