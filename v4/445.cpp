// VUa Online Judge
// Problem 445 - Mavelous Mazes
// Written by Tian Zhou
// Created 2/13/13
// Last Modified 2/13/13

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char c;
    int n = 0;

    while((c = getc(stdin)) != EOF)
    {
        if (c >= '0' && c <= '9')
            n += (c - '0');
        else if (c == '!' || c == '\n')
            putc('\n', stdout);
        else
        {
            if (c == 'b')
                c = ' ';

            for (int i = 0; i < n; i++)
                putc(c, stdout);

            n = 0;
        }

    }

    return 0;
}
