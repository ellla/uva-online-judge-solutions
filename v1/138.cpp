// Uva Online Judge
// Problem 138 - Street Numbers
// Written by Tian Zhou
// Created 3/13/13
// Last Modified 3/13/13

#include <cstdio>

int main()
{
    long num = 1;
    long leftsum = 1;
    long rightsum = 1;
    long rightmost = 1;
    long count = 0;

    while(count < 10)
    {
        rightsum -= num;
        num++;
        leftsum += num;

        while (rightsum < leftsum)
        {
            rightmost++;
            rightsum += rightmost;
        }

        if (rightsum == leftsum)
        {
            count++;
            printf("%10ld%10ld\n", num, rightmost);
        }
    }


    return 0;
}
