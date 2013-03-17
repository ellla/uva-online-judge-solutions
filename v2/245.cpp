// UVa Online Judge
// Problem 245 - Uncompress
// Written by Tian Zhou
// Created 3/15/13
// Last Modified 3/16/13

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <list>
using namespace std;

int main()
{
    char c;
    string word = "";
    list<string> mylist;
    list<string>::iterator it;
    int index;

    while (c = getchar())
    {
        if (isalnum(c))
            word += c;
        else
        {
            if (isdigit(word[0]))
            {
                index = atoi(word.c_str());

                if (index == 0)
                    break;

                it = mylist.begin();
                advance(it, (index - 1));
                word = *it;
                cout << word;
                mylist.erase(it);

                mylist.push_front(word);
                word = "";
                putchar(c);
            }
            else
            {
                if (word.length() > 0)
                {
                    cout << word;
                    mylist.push_front(word);
                }
                putchar(c);
                word = "";
            }
        }
    }

    return 0;
}
