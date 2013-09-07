// UVa Online Judge
// Problem 10815 - Andy's First Dictionary
// Written by Tian Zhou
// Created 9/4/13
// Last Modified 9/4/13

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string word;
    string sub;
    set<string> mySet;
    set<string>::iterator it;

    while (cin >> word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
                word[i] += (int)('a' - 'A');
            else if (!(word[i] >= 'a' && word[i] <= 'z'))
            {
                sub = word.substr(0, i) ;
                if (!sub.empty())
                    mySet.insert(sub);
                word = word.substr(i + 1);
                i = -1;
            }
        }

        if (!word.empty())
            mySet.insert(word);
    }

    for (it = mySet.begin(); it != mySet.end(); ++it)
        cout << *it << endl;

    return 0;
}