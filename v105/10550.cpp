// UVa Online Judge
// Problem 10550 - Combination Lock
// Written by Tian Zhou
// Created 3/4/13
// Last Modified 3/4/13

#include <iostream>
using namespace std;

int get_clockwise_degree(int a, int b)
{
    if (a > b)
        return (a - b) * 9;
    else
        return (40 - (b - a)) * 9;
}

int get_counterclockwise_degree(int a, int b)
{
    return get_clockwise_degree(b, a);
}

int main()
{
    int p, a, b, c;
    int degree;

    cin >> p >> a >> b >> c;
    while (p + a + b + c != 0)
    {
        degree = 1080 + get_clockwise_degree(p, a) 
            + get_counterclockwise_degree(a, b) 
            + get_clockwise_degree(b, c);

        cout << degree << endl;
        cin >> p >> a >> b >> c;
    }

    return 0;
}
