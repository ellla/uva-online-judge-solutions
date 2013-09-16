// UVa Online Judge
// Problem 11340 - Newspaper
// Written by Tian Zhou
// Created 9/11/13
// Last Modified 9/11/13

#include <cstdlib>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int cases;
    int characters;
    int lines;
    int line;

    map<unsigned char, int> myMap;
    unsigned char c;
    int value;

    long long total;

    scanf("%d", &cases);
    for (int i = 0; i < cases; i++)
    {
        total = 0;
        line = 0;
        myMap.clear();

        scanf("%d", &characters);
        for (int j = 0; j < characters; j++)
        {
            scanf("\n%c %d", &c, &value);
            myMap[c] = value;
        }

        scanf("%d\n", &lines);
        while (line < lines)
        {
            c = getchar();
            total += myMap[c];

            if (c == '\n')
            {
                line++;
            }
        }

        printf("%.2f$\n", total / 100.0);
    }

    return 0;
}