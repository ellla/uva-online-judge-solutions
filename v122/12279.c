// UVa Online Judge
// Problem 12279 - Emoogle Balance
// Written by Tian Zhou
// Created 9/10/13
// Last Modified 9/10/13

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cases = 0;
    int N;
    int i;
    int num, positive, zero;

    scanf("%d", &N);
    while (N != 0)
    {
        cases++;
        positive = 0;
        zero = 0;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &num);
            (num > 0) ? positive++ : zero++;
        }
        printf("Case %d: %d\n", cases, positive - zero);
        scanf("%d", &N);
    }

    return 0;
}
