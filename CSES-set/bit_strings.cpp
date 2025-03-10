#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int main()
{
    ll n;
    cin >> n;

    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans *= 2;
        ans %= MOD; 
    }

    cout << ans << endl;
}