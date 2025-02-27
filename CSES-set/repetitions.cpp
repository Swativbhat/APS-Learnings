#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long int cnt = 1, max = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    cout << max;
}