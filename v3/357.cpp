// UVa Online Judge
// Problem 357 - Let Me Count The Ways
// Written by Tian Zhou
// Created 9/1/13
// Last Modified 9/1/13

#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 5;
const int S[] = {1, 5, 10, 25, 50};
const int LIMIT = 30000;

void pre_compute(vector< vector<long long> >& table)
{
    long long x, y;

    for (int i = 0; i < SIZE; i++)
        table[0][i] = 1;

    for (int i = 1; i < LIMIT + 1; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0;
            y = (j >= 1) ? table[i][j - 1] : 0;
            table[i][j] = x + y;
        }
    }
}

int main()
{
    int input;
    long long ways;
    vector< vector<long long> > table(LIMIT + 1, vector<long long>(SIZE, 0));
    
    pre_compute(table);

    while (cin >> input)
    {
        ways = table[input][SIZE - 1];

        if (ways == 1)
            cout << "There is only 1 way to produce " << input << " cents change.\n";
        else
            cout << "There are " << ways << " ways to produce " << input << " cents change.\n";
    }

    return 0;
}
