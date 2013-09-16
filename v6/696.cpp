// UVa Online Judge
// Problem 696 - How Many Knights
// Written by Tian Zhou
// Created 9/15/13
// Last Modified 9/15/13

#include <cstdlib>
#include <cstdio>

int count(int m, int n)
{
    int ans;

    if (n < m)
        return count(n, m);
    else if (m == 1)
        return n;
    else if (m == 2)
    {
        ans = n / 4 * 4;
        if (n % 4 == 1)
            ans += 2;
        else if (n % 4 > 1)
            ans += 4;

        return ans;
    }
    else
        return (m * n + 1) / 2;
}

int main()
{
    int m, n;
    while (scanf("%d %d", &m, &n) && m != 0)
    {
        printf("%d knights may be placed on a %d row %d column board.\n",
            count(m, n), m, n);
    }

    return 0;
}