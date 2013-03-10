// UVa Online Judge
// Problem 11799 - Horror Dash
// Written by Tian Zhou
// Created 3/4/13
// Last Modified 3/4/13

#include <iostream>
using namespace std;

int main()
{
    int cases;
    int n;
    int s;
    int max;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> n;
        max = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> s;
            if (s > max)
                max = s;
        }

        cout << "Case " << i + 1 << ": " << max << endl;
    }
    return 0;
}
