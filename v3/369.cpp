// UVa Online Judge
// Problem 369 - Combinations
// Written by Tian Zhou
// Created 3/5/13
// Last Modified 3/5/13

#include <iostream>
#include <cmath>
using namespace std;

unsigned long long C(unsigned long long N, unsigned long long M)
{
    unsigned long long L = max(M, N - M);
    unsigned long long S = min(M, N - M);

    unsigned long long result = 1;

    for (int i = 1; i <= N - L; i++)
    {
        result *= (L + i);

        result /= i;
    }

    return result;
}

int main()
{
    unsigned long long N;
    unsigned long long M;

    cin >> N >> M;
    while(N != 0 && M != 0)
    {
        cout << N << " things taken " << M << " at a time is " << C(N, M) << " exactly." << endl;

        cin >> N >> M;
    }

    return 0;
}
