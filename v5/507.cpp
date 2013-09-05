// UVa Online Judge
// Problem 507 - Jill Rides Again
// Written by Tian Zhou
// Created 9/4/13
// Last Modified 9/4/13

#include <cstdlib>
#include <cstdio>

void maxSubArray(int a[], int size, int ans[])
{
    int max_sum = 0;
    int current_sum = 0;

    int max_start = 0;
    int max_end = 0;
    int current_start = 0;
    int current_end = 0;

    for (int i = 0; i < size; i++)
    {
        current_sum = current_sum + a[i];

        if (current_sum < 0)
        {
            current_sum = 0;
            current_start = i + 1;
            current_end = i + 1;
        }
        else
        {
            current_end++;
            if (max_sum < current_sum)
            {
                max_sum = current_sum;
                max_start = current_start;
                max_end = current_end;
            }
            else if (max_sum == current_sum)
            {
                if (current_end - current_start > max_end - max_start)
                {
                    max_start = current_start;
                    max_end = current_end;
                }
            }
        }
    }

    ans[0] = max_start + 1;
    ans[1] = max_end + 1;
}

int main()
{
    int cases;
    int size;
    int *arr;
    int ans[2];

    scanf("%d", &cases);

    for (int i = 1; i <= cases; i++)
    {
        scanf("%d", &size);
        arr = new int[size - 1];

        for (int i = 0; i < size - 1; i++)
        {
            scanf("%d", &arr[i]);
        }

        maxSubArray(arr, size - 1, ans);
        int start = ans[0];
        int end = ans[1];

        if (!(start == 1 && end == 1))
            printf("The nicest part of route %d is between stops %d and %d\n", i, start, end);
        else
            printf("Route %d has no nice parts\n", i);

        delete[] arr;
    }

    return 0;
}