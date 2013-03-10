// UVa Online Judge
// Problem 10783 - Odd Sum
// Written by Tian Zhou
// Created 10/6/12
// Last Modified 10/10/12

#include <iostream>

using namespace std;

int main()
{
    int cases;
    int start, end;
    int sum;

    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        sum = 0;
        cin >> start >> end;

        if (start % 2 == 0)
            start++;

        for (int i = start; i <= end; i += 2)
            sum += i;

        cout << "Case " << i + 1 << ": " << sum << endl;
    }
}
