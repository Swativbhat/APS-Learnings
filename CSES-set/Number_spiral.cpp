#include <bits/stdc++.h>
using namespace std;
#define li long int

int main()
{
    li tests;
    cin >>tests;

    li x, y;

    while (tests > 0)
    {
        cin >> x >> y;

        if (y > x)
        {
            if (y % 2 != 0)
                cout << (y * y) - x + 1 << endl;
            else
                cout << (y - 1) * (y - 1) + x << endl;
        }
        else
        {
            if (x % 2 != 0)
                cout << (x - 1) * (x - 1) + y << endl;
            else
                cout << (x * x) - y + 1 << endl;
        }
        tests--;
    }
}