// UVa Online Judge
// Problem 11530 - SMS Typing
// Written by Tian Zhou
// Created 3/13/13
// Last Modified 3/13/13

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    int t;
    string s;
    map<char, int> myMap;
    
    myMap['a'] = 1;
    myMap['b'] = 2;
    myMap['c'] = 3;
    myMap['d'] = 1;
    myMap['e'] = 2;
    myMap['f'] = 3;
    myMap['g'] = 1;
    myMap['h'] = 2;
    myMap['i'] = 3;
    myMap['j'] = 1;
    myMap['k'] = 2;
    myMap['l'] = 3;
    myMap['m'] = 1;
    myMap['n'] = 2;
    myMap['o'] = 3;
    myMap['p'] = 1;
    myMap['q'] = 2;
    myMap['r'] = 3;
    myMap['s'] = 4;
    myMap['t'] = 1;
    myMap['u'] = 2;
    myMap['v'] = 3;
    myMap['w'] = 1;
    myMap['x'] = 2;
    myMap['y'] = 3;
    myMap['z'] = 4;
    myMap[' '] = 1;

    cin >> n;
    cin.ignore(256, '\n');

    for (int i = 1; i <= n; i++)
    {
        t = 0;
        getline(cin, s);

        for (int j = 0; j < s.length(); j++)
            t += myMap[s[j]];

        cout << "Case #" << i << ": " << t << endl;
    }

    return 0;
}
