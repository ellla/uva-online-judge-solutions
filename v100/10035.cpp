// UVa Online Judge
// Problem 10035 - Primary Arithmetic
// Written by Tian Zhou
// Created 12/5/12
// Last Modified 12/5/12

#include <iostream>
using namespace std;

const int SIZE = 10;

int getCarry(unsigned a, unsigned b);

int main()
{
    unsigned a;
    unsigned b;

    cin >> a >> b;
    
    while(a != 0 || b != 0)
    {
        if(getCarry(a, b) == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(getCarry(a, b) == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << getCarry(a, b) << " carry operations." << endl;
        }

        cin >> a >> b;
    }

    return 0;
}

int getCarry(unsigned a, unsigned b)
{
    int A[SIZE];
    int B[SIZE];
    int carry;
    int count;

    carry = 0;
    count = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        A[i] = a % 10;
        B[i] = b % 10;

        a /= 10;
        b /= 10;
    }

    for(int i = 0; i < SIZE; i++)
    {
        if(A[i] + B[i] + carry >= 10)
        {
            count++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
    }

    return count;
}
