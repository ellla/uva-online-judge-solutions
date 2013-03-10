// UVa Online Judge
// Problem 10696 - f91
// Written by Tian Zhou
// Created 1/10/13
// Last Modified 1/10/13

#include <iostream>
using namespace std;

int f91(int n)
{
    if(n >= 101)
    {
        return n - 10;
    }
    
    else
    {
        return f91(f91(n + 11));
    }
}

int main()
{
    int n;
    cin >> n;

    while(n != 0)
    {
        cout << "f91(" << n << ") = " << f91(n) << endl;
        cin >> n;
    }
    
    return 0;
}
