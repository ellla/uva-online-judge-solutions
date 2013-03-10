// UVa Online Judge
// Problem 579 - ClockHands
// Written by Tian Zhou
// Created 3/7/13
// Last Modified 3/7/13

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main()
{
    string t;
    int hr;
    int min;
    double hrdeg;
    double mindeg;
    double deg;

    cin >> t;
    while (t != "0:00")
    {
        hr = atoi(t.substr(0, t.find(':')).c_str());
        min = atoi(t.substr(t.find(':') + 1).c_str());

        hrdeg = 30.0 * (hr + min / 60.0);
        mindeg = 6.0 * min;

        if (hrdeg >= 360.0)
            hrdeg -= 360.0;

        deg = abs(hrdeg - mindeg);
        
        if (deg > 180.0)
            deg = 360.0 - deg;

        cout << fixed << setprecision(3) << deg << endl;
        cin >> t;
    }
    
    return 0;
}
