// UVa Online Judge
// Problem 694 - The Collatz Sequence
// Written by Tian Zhou
// Created 2/13/13
// Last Modified 3/2/13

#include <iostream>
using namespace std;

long long num_terms(long long A, long long lim)
{
    long long t = 1;
    while (A != 1)
    {
        if (A > lim)
        {
            t--;
            break;
        }
        else if (A % 2 == 0)
            A /= 2;
        else
            A = 3 * A + 1;

        t++;
    }

    return t;
}

int main()
{
    int cases = 1;
    long long A;
    long long lim;

    cin >> A >> lim;
    while (A > 0 && lim > 0)
    {
        cout << "Case " << cases++ << ": " << "A = "
        << A << ", limit = " << lim << ", number of terms = "
        << num_terms(A, lim) << endl;

        cin >> A >> lim;
    }

    return 0;
}
