// UVa Online Judge
// Problem 10963 - The Swallowing Ground
// Written by Tian Zhou
// Created 9/10/13
// Last Modified 9/10/13

#include <cstdlib>
#include <cstdio>

int main()
{
    int cases;
    int cols;
    int row1, row2;
    int diff;
    bool ok;

    scanf("%d", &cases);
    for (int i = 0; i < cases; i++)
    {
        if (i > 0)
            printf("\n");

        scanf("%d", &cols);
        scanf("%d %d", &row1, &row2);
        diff = row1 - row2;
        ok = true;

        for (int j = 1; j < cols; j++)
        {
            scanf("%d %d", &row1, &row2);
            if (row1 - row2 != diff)
            {
                ok = false;
            }
        }

        if (ok)
            printf("yes\n");
        else
            printf("no\n");
    }
    
    return 0;
}