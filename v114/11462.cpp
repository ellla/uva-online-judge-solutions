// UVa Online Judge
// Problem 11462 - Age Sort
// Written by Tian Zhou
// Created 9/1/2013
// Last Modified 9/1/2013

#include <cstdlib>
#include <cstdio>

int main()
{
    int count;
    int input;
    bool is_first;

    scanf("%d", &count);
    while (count != 0)
    {
        int frequency[100] = {};
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &input);
            frequency[input]++;
        }

        is_first = true;

        for (int i = 1; i < 100; i++)
        {
            for (int j = 0; j < frequency[i]; j++)
            {
                if (is_first)
                {
                    printf("%d", i);
                    is_first = false;
                }
                else
                {
                    printf(" %d", i);
                }
            }
        }
        printf("\n");
        scanf("%d", &count);
    }

    return 0;
}
