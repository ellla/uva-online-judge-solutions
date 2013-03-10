// UVa Online Judge
// Problem 102 - Ecological Bin Packing
// Written by Tian Zhou
// Created 3/6/13
// Last Modified 3/6/13

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const string TYPE[] = {"BCG ", "BGC ", "CBG ", "CGB ", "GBC ", "GCB "};

int find_min_index(int m[], int size)
{
    int min_index = 0;

    for (int i = 1; i < size; i++)
    {
        if (m[i] < m[min_index])
            min_index = i;
    }

    return min_index;
}

int main()
{ 
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int m[6];
    int i;

    while (cin >> n1)
    {
        cin >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;

        m[0] = n2 + n3 + n4 + n5 + n7 + n9;
        m[1] = n2 + n3 + n4 + n6 + n7 + n8;
        m[2] = n1 + n2 + n5 + n6 + n7 + n9;
        m[3] = n1 + n2 + n4 + n6 + n8 + n9;
        m[4] = n1 + n3 + n5 + n6 + n7 + n8;
        m[5] = n1 + n3 + n4 + n5 + n8 + n9;

        i = find_min_index(m, 6);

        cout << TYPE[i] << m[i] << endl;
    }

    return 0;
}
