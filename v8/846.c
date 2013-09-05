// UVa Online Judge
// Problem 846 - Steps
// Written by Tian Zhou
// Created 9/4/13
// Last Modified 9/4/13

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cases;
    int x, y;
    int diff;
    int steps;
    int height;
    int i;

    scanf("%d", &cases);
    for (i = 0; i < cases; i++)
    {
        scanf("%d %d", &x, &y);
        diff = y - x;
        steps = 0;
        height = 1;

        while (diff > 2 * height)
        {
            diff -= (2 * height);
            steps += 2;
            height++;
        }

        if (diff > height)
            steps += 2;
        else if (diff > 0)
            steps++;
        
        printf("%d\n", steps);
    }

    return 0;
}