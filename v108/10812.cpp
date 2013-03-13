// UVa Online Judge
// Problem 10812 - Beat the Spread!
// Written by Tian Zhou
// Created 3/11/13
// Last Modified 3/11/13

#include <cstdio>
#include <cmath>

int main()
{
    int n, sum, diff;
    double larger, smaller;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &sum, &diff);

        if (sum < diff)
            printf("impossible\n");
        else
        {
            larger = (sum + diff) / 2.0;

            if (larger != int(larger))
                printf("impossible\n");
            else
            {
                smaller = sum - larger;
                printf("%.0f %.0f\n", larger, smaller);
            }
        }
    }

    return 0;
}
