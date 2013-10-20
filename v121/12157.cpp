// UVa Online Judge
// Problem 12157 - Traffic Plan
// Written by Tian Zhou
// Created 10/18/13
// Last Modified 10/18/13

#include <cstdio>

int main()
{
    int cases;
    int calls;
    int mileCost;
    int juiceCost;
    int duration;

    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d", &calls);
        mileCost = 0;
        juiceCost = 0;
        for (int j = 0; j < calls; j++)
        {
            scanf("%d", &duration);
            mileCost += (duration / 30 + 1) * 10;
            juiceCost += (duration / 60 + 1) * 15;
        }

        if (mileCost < juiceCost)
            printf("Case %d: Mile %d\n", i, mileCost);
        else if (juiceCost < mileCost)
            printf("Case %d: Juice %d\n", i, juiceCost);
        else
            printf("Case %d: Mile Juice %d\n", i, mileCost);
    }

    return 0;
}
