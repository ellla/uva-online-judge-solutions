// UVa Online Judge
// Problem 11988 - Broken Keyboard (a.k.a. Beiju Text)
// Written by Tian Zhou
// Created 9/11/13
// Last Modified 9/11/13

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <list>
using namespace std;

const char HOME = '[';
const char END = ']';
const string KEY = "[]";
const int FRONT = 0;
const int BACK = 1;

int main()
{
    string broken;
    list<string> text;
    list<string>::iterator it;
    int pos;
    int start_pos;
    string to_be_inserted;
    int mode;

    while (getline(cin, broken))
    {
        text.clear();
        mode = FRONT;
        start_pos = 0;

        while ((pos = broken.find_first_of(KEY, start_pos)) != string::npos)
        {
            to_be_inserted = broken.substr(start_pos, pos - start_pos);

            if (mode == FRONT)
                text.push_front(to_be_inserted);
            else
                text.push_back(to_be_inserted);

            if (broken[pos] == HOME)
                mode = FRONT;
            else
                mode = BACK;

            start_pos = pos + 1;
        }

        if (mode == FRONT)
            text.push_front(broken.substr(start_pos));
        else
            text.push_back(broken.substr(start_pos));

        for (it = text.begin(); it != text.end(); ++it)
        {
            printf("%s", it->c_str());
        }
        printf("\n");
    }

    return 0;
}