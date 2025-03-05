#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll increasingArray(vector<ll> &v, ll n)
{

    ll move = 0;

    for (ll i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            move += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    return move;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << increasingArray(v, n) << endl;

    return 0;
}