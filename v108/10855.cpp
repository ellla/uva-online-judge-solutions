// UVa Online Judge
// Problem 10855 - Rotated square
// Written by Tian Zhou
// Created 9/14/13
// Last Modified 9/15/13

#include <cstdlib>
#include <cstdio>

bool check(char **big, char **small, int n, int i, int j)
{
    for (int a = i; a < i + n; a++)
    {
        for (int b = j; b < j + n; b++)
        {
            if (big[a][b] != small[a - i][b - j])
                return false;
        }
    }

    return true;
}

bool check90(char **big, char **small, int n, int i, int j)
{
    for (int a = i; a < i + n; a++)
    {
        for (int b = j; b < j + n; b++)
        {
            if (big[a][b] != small[n - (b - j) - 1][a - i])
                return false;
        }
    }

    return true;
}

bool check180(char **big, char **small, int n, int i, int j)
{
    for (int a = i; a < i + n; a++)
    {
        for (int b = j; b < j + n; b++)
        {
            if (big[a][b] != small[n - (a - i) - 1][n - (b - j) - 1])
                return false;
        }
    }

    return true;
}

bool check270(char **big, char **small, int n, int i, int j)
{
    for (int a = i; a < i + n; a++)
    {
        for (int b = j; b < j + n; b++)
        {
            if (big[a][b] != small[b - j][n - (a - i) - 1])
                return false;
        }
    }

    return true;
}

int main()
{
    int N, n;
    char **big, **small;
    int count, count90, count180, count270;

    while (scanf("%d %d", &N, &n) && N != 0)
    {
        big = new char*[N];
        small = new char*[n];

        // Read big array
        for (int i = 0; i < N; i++)
        {
            big[i] = new char[N];

            for (int j = 0; j < N; j++)
            {
                scanf("\n%c", &big[i][j]);
            }
        }

        // Read small array
        for (int i = 0; i < n; i++)
        {
            small[i] = new char[n];

            for (int j = 0; j < n; j++)
            {
                scanf("\n%c", &small[i][j]);
            }
        }

        count = 0;
        count90 = 0;
        count180 = 0;
        count270 = 0;

        for (int i = 0; i <= N - n; i++)
        {
            for (int j = 0; j <= N - n; j++)
            {
                if (check(big, small, n, i, j))
                    count++;
                if (check90(big, small, n, i, j))
                    count90++;
                if (check180(big, small, n, i, j))
                    count180++;
                if (check270(big, small, n, i, j))
                    count270++;
            }
        }

        printf("%d %d %d %d\n", count, count90, count180, count270);
    }

    return 0;
}