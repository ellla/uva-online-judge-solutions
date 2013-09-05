// UVa Online Judge
// Problem 10684 - The jackpot
// Written by Tian Zhou
// Created 9/4/13
// Last Modified 9/4/13

#include <cstdlib>
#include <cstdio>

int maxSubArray(int a[], int size)
{
    int max_sum = 0;
    int current_sum = 0;

    for (int i = 0; i < size; i++)
    {
        current_sum = current_sum + a[i];

        if (current_sum < 0)
            current_sum = 0;
        else if (max_sum < current_sum)
            max_sum = current_sum;
    }

    return max_sum;
}

int main()
{
    int size;
    int *arr;
    int max;

    scanf("%d", &size);

    while (size != 0)
    {
        arr = new int[size];

        for (int i = 0; i < size; i++)
            scanf("%d", &arr[i]);

        max = maxSubArray(arr, size);

        if (max == 0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n", max);

        scanf("%d", &size);
    }

    return 0;
}