// UVa Online Judge
// Problem 299 - Train Swapping
// Written by Tian Zhou
// Created 12/5/12
// Last Modified 12/5/12

#include <iostream>
#include <algorithm>
using namespace std;

int getSwapCount(int* A, int size);

int main()
{
    int cases;
    int trains;
    int* A;

    cin >> cases;

    for(int i = 0; i < cases; i++)
    {
        cin >> trains;

        A = new int[trains];

        for(int i = 0; i < trains; i++)
        {
            cin >> A[i];
        }

        cout << "Optimal train swapping takes " << getSwapCount(A, trains) << " swaps." << endl;
    }

    return 0;
}

int getSwapCount(int* A, int size)
{
    int count;

    count = 0;

    for(int i = size; i > 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
        {
            if(A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                count++;
            }
        }
    }

    return count;
}
