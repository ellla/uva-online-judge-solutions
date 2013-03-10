// UVa Online Judge
// Problem 382 - Perfection
// Written by Tian Zhou
// Created 12/5/12
// Last Modified 12/6/12

#include <iostream>
#include <iomanip>
using namespace std;

int getSum(int n);

int main()
{
    int n;
    cout << "PERFECTION OUTPUT" << endl;
    cin >> n;

    while(n != 0)
    {
        cout << right << setw(5) << n << "  " << left;

        if(n == getSum(n))
        {
            cout << "PERFECT" << endl;
        }
        else if(n > getSum(n))
        {
            cout << "DEFICIENT" << endl;
        }
        else
        {
            cout << "ABUNDANT" << endl;
        }

        cin >> n;
    }

    cout << "END OF OUTPUT" << endl;
    return 0;
}

int getSum(int n)
{
    int sum;

    if(n == 1)
    {
        return 0;
    }
    else
    {
        sum = 1;

        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                sum += i;
            }
        }

        return sum;
    }
}
