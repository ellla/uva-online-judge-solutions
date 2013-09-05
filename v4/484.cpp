// UVa Online Judge
// Problem 484 - The Department of Redundancy Department
// Written by Tian Zhou
// Created 9/4/13
// Last Modified 9/4/13

#include <cstdlib>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

int main()
{
    long long num;
    map<long long, long long> myMap;
    vector<long long> myVector;

    while (scanf("%d", &num) != EOF)
    {
        if (myMap[num]++ == 0)
            myVector.push_back(num);
    }

    for (long long i = 0; i < myVector.size(); i++)
    {
        printf("%d %d\n", myVector[i], myMap[myVector[i]]);
    }

    return 0;
}