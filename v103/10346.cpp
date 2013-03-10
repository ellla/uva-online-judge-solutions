// UVa Online Judge
// Problem 10346 - Peter's Smokes
// Written by Tian Zhou
// Created 2/15/13
// Last Modified 2/15/13

#include <iostream>
using namespace std;

int find(int n, int k)
{
    int count = n;

    while (n >= k)
    {
	    count += n / k;
        n = n / k + n % k;
    }

    return count;
}

int main()
{
    int n, k;

    while (cin >> n >> k)
        cout << find(n, k) << endl;

    return 0;
}
