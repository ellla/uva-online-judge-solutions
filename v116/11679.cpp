// UVa Online Judge
// Problem 11679 - Sub-prime
// Written by Tian Zhou
// Created 9/11/13
// Last Modified 9/11/13

#include <cstdlib>
#include <cstdio>

int main()
{
    int num_bank, num_trans;
    int *reserves;
    int from, to, value;
    bool ok;

    scanf("%d %d", &num_bank, &num_trans);
    while (num_bank != 0)
    {
        reserves = new int[num_bank];
        ok = true;

        for (int i = 0; i < num_bank; i++)
            scanf("%d", &reserves[i]);

        for (int i = 0; i < num_trans; i++)
        {
            scanf("%d %d %d", &from, &to, &value);
            reserves[from - 1] -= value;
            reserves[to - 1] += value;
        }

        for (int i = 0; i < num_bank; i++)
        {
            if (reserves[i] < 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            printf("S\n");
        else
            printf("N\n");

        scanf("%d %d", &num_bank, &num_trans);
    }

    return 0;
}