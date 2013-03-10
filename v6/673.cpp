// UVa Online Judge
// Problem 673 - Parentheses Balance
// Written by Tian Zhou
// Created 2/4/13
// Last Modified 3/4/13

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check(string s)
{
    if (s.size() == 0)
        return true;

    stack<char> mystack;
    mystack.push(s[0]);

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            if (!mystack.empty() && mystack.top() == '(')
                mystack.pop();
            else
                return false;
        }
        else if (s[i] == ']')
        {
            if (!mystack.empty() && mystack.top() == '[')
                mystack.pop();
            else
                return false;
        }
        else
        {
            mystack.push(s[i]);
        }
    }

    return mystack.empty();
}

int main()
{
    int n;
    string s;

    cin >> n;
    cin.ignore(256, '\n');

    for (int i = 0; i < n; i++)
    {
        getline(cin, s);

        if (check(s))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

    return 0;
}
