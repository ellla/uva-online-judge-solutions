// UVa Online Judge
// Problem 11805 - Bafana Bafana
// Written by Tian Zhou
// Started 9/19/13
// Last Modified 9/19/13

#include <cstdlib>
#include <cstdio>

int main()
{
    int cases;
    int people, start, rounds, end;

    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d %d %d", &people, &start, &rounds);
        end = rounds % people + start;
        if (end > people)
            end -= people;

        printf("Case %d: %d\n", i, end);
    }

    return 0;
}