// UVa Online Judge
// Problem 113 - Power of Cryptography
// Written by Tian Zhou
// Created 9/15/13
// Last Modified 9/15/13

#include <cstdlib>
#include <cstdio>
#include <cmath>

int main()
{
    double n, p;

    while (scanf("%lf %lf", &n, &p) != EOF)
    {
        printf("%.lf\n", pow(p, 1 / n));
    }

    return 0;
}