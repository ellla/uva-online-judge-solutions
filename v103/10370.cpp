// UVa Online Judge
// Problem 10370 - Above Average
// Written by Tian Zhou
// Created 2/5/13
// Last Modified 2/5/13

#include <iostream>
#include <iomanip>
using namespace std;

double computeAverage(double *A, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += A[i];

    return sum / n;
}

int main()
{
    int cases;
    int n;
    double *A;
    double average;
    int count;

    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> n;
        A = new double[n];
        count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        average = computeAverage(A, n);

        for (int i = 0; i < n; i++)
            if (A[i] > average)
                count++;

        cout << fixed << setprecision(3) << (double)count * 100.0 / n << "%\n";
    }

    return 0;
}
