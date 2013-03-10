// UVa Online Judge
// Problem 10018 - Reverse and Add
// Written by Tian Zhou
// Created 12/5/12
// Last Modified 12/5/12

#include <iostream>
using namespace std;

int getReverse(unsigned n);
bool isPalindrome(unsigned n);
int reverseAndAdd(unsigned& n);

int test(int& a)
{
    a++;
    return a + 1;
}

int main()
{
    int cases;
    unsigned n;

    cin >> cases;

    for(int i = 0; i < cases; i++)
    {
        cin >> n;
        cout << reverseAndAdd(n) << ' ';
        cout << n << endl;
    }
    
    return 0;
}

int getReverse(unsigned n)
{
    int reverse;

    reverse = 0;

    while(n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

bool isPalindrome(unsigned n)
{
    return (n == getReverse(n));
}

int reverseAndAdd(unsigned& n)
{
    int count = 0;

    while(!isPalindrome(n))
    {
        n += getReverse(n);
        count++;
    }

    return count;
}
