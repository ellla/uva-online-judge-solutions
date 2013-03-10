// UVa Online Judge
// Problem 10038 - Jolly Jumpers
// Written by Tian Zhou
// Created 12/4/12
// Last Modified 12/4/12

#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void getDifference(int* A, int* D, int size);
bool isJolly(int* D, int size);

int main()
{
    int n;
    int* A;
    int* D;

    while(cin >> n)
    {
        A = new int[n];
        D = new int[n - 1];
        for(int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        getDifference(A, D, n);
        sort(D, D + n - 1);

        if(isJolly(D, n - 1))
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }

        delete[] A;
        delete[] D;
    }


    return 0;
}

void getDifference(int* A, int* D, int size)
{
    for(int i = 1; i < size; i++)
    {
        D[i - 1] = abs(A[i] - A[i - 1]);
    }
}

bool isJolly(int* D, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(D[i] != i + 1)
        {
            return false;
        }
    }
    return true;
}
