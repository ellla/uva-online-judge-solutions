// UVa Online Judge
// Problem 11875 - Brick Game
// Written by Tian Zhou
// Created 9/19/13
// Last Modified 9/19/13

#include <cstdlib>
#include <cstdio>

int main()
{
    int cases, members, junk, captain;

    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d", &members);
        for (int j = 0; j < members / 2; j++)
            scanf("%d", &junk);

        scanf("%d", &captain)    ;

        for (int j = 0; j < members / 2; j++)
            scanf("%d", &junk);

        printf("Case %d: %d\n", i, captain);
    }

    return 0;
}