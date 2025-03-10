#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solution(ll n)
{
    if (n < 2)
    {
        cout << "NO";
        return;
    }

    ll sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO";
        return;
    }
    else
    {
        vector<ll> set1;
        vector<ll> set2;
        sum = sum / 2;
        while (n > 0)
        {
            if (sum > 0 && (sum - n) >= 0)
            {
                set1.push_back(n);
                sum -= n;
            }
            else
            {
                set2.push_back(n);
            }
            n--;
        }
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for (auto it : set1)
            cout << it << " ";
        cout << endl;
        cout << set2.size() << endl;
        for (auto it1 : set2)
            cout << it1 << " ";
    }
}

int main()
{
    ll n;
    cin >> n;
    solution(n);
    return 0;
}