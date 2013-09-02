// UVa Online Judge
// Problem 147 - Dollars
// Written by Tian Zhou
// Created 9/1/13
// Last Modified 9/1/13

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

const int SIZE = 11;
const int S[] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
const int LIMIT = 6000;

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
    double input;
    int adjusted_input;
    long long ways;
    vector< vector<long long> > table(LIMIT + 1, vector<long long>(SIZE, 0));
    
    pre_compute(table);

    cin >> input;
    while (input != 0)
    {
        adjusted_input = input * 20;
        ways = table[adjusted_input][SIZE - 1];

        cout << fixed << setprecision(2) << right << setw(6) << input << setw(17) << ways << endl;
        cin >> input;
    }

    return 0;
}
