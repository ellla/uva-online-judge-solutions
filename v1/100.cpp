// UVa Online Judge
// Problem 100 - The 3n + 1 problem
// Written by Tian Zhou
// Created 10/5/12
// Last Modified 10/10/12

#include <iostream>
using namespace std;

int getCycleLength(int n)
{
    int length = 1;

    while (n != 1)
    {
        if (n % 2 != 0) // if n is odd, perform two operations together because 3 * odd + 1 must be even
        {
            n += (n + 1) / 2;
            length += 2;
        }
        else
        {
            n /= 2;
            length++;
        }
    }

    return length;
}

int findMax(int m, int n)
{
    int max = 0;

    if (m > n)
    {
        int temp = n;
        n = m;
        m = temp;
    }

    for (int i = m; i <= n; i++)
        if (max < getCycleLength(i))
            max = getCycleLength(i);

    return max;
}

int main()
{
    int m, n;

    while(cin >> m >> n)
        cout << m << " " << n  << " " << findMax(m, n) << endl;

    return 0;
}
