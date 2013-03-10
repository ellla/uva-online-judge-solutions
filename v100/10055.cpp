// UVa Online Judge
// Problem 10055 - Hashmat the Brave Warrior
// Written by Tian Zhou
// Created 10/5/12
// Last Modified 10/10/12

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long m, n;
    vector<long long> outV;

    while(cin >> m >> n)
    {
        outV.push_back(abs(n - m));
    }

    for (unsigned i = 0; i < outV.size(); i++)
        cout << outV[i] << endl;
}

/* Not Working
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long m, n;

    while(cin >> m >> n)
        cout << abs(n - m) << endl;
}
*/
