// UVa Online Judge
// Problem 11332 - Summing Digits
// Written by Tian Zhou
// Created 3/5/13
// Last Modified 3/5/13

#include <iostream>
using namespace std;

int get_sum(int n)
{
    int sum = 0;
    
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    if (sum < 10)
        return sum;
    else
        return get_sum(sum);
}

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        cout << get_sum(n) << endl;
        cin >> n;
    }

    return 0;
}
