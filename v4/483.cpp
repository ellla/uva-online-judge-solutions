// UVa Online Judge
// Problem 483 - Word Scramble
// Written by Tian Zhou
// Created 2/4/13
// Last Modified 2/4/13

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string s;
    stack<char> st;

    while(getline(cin, s))
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' && i != s.length() - 1)
                st.push(s[i]);
            else
            {
                if (i == s.length() - 1)
                    st.push(s[i]);

                while(!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }

                if (i != s.length() - 1)
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
