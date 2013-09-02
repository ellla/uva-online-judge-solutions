// UVa Online Judge
// Problem 11461 - Square Numbers
// Written by Tian Zhou
// Created 9/2/13
// Last Modified 9/2/13

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void pre_compute(vector<int>& vec)
{
    int root = 1;
    int square = 1;

    while (square <= 100000)
    {
        vec.push_back(square);
        root++;
        square = root * root;
    }
}

int main()
{
    vector<int> vec;
    pre_compute(vec);

    int a, b;
    int i, j;
    int count;

    cin >> a >> b;
    while (a != 0)
    {
        for (i = 0; i < vec.size() && vec[i] < a; i++);

        for (j = i; j * j <= b; j++);
        j--;

        cout << j - i << '\n';
        cin >> a >> b;
    }

    return 0;
}