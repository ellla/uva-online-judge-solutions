// UVa Online Judge
// Problem 11942 - Lumberjack Sequencing
// Written by Tian Zhou
// Created 3/10/13
// Last Modified 3/10/13

#include <iostream>
using namespace std;

bool is_ordered(int len[])
{
    bool ascending = true;

    if (len[1] < len[0])
        ascending = false;
    
    if (ascending)
    {
        for (int i = 2; i < 10; i++)
            if (len[i] < len[i - 1])
                return false;
    }
    else
    {
        for (int i = 2; i < 10; i++)
            if (len[i] > len[i - 1])
                return false;
    }

    return true;
}

int main()
{
    int n;
    int len[10];

    cin >> n;
    cin.ignore(256, '\n');

    cout << "Lumberjacks:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 10; i++)
            cin >> len[i];

        if (is_ordered(len))
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }

    return 0;
}
