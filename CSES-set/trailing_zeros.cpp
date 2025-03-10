#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solution(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += n / 5;
        n /= 5;
    }

    cout << ans << endl;
}

int main()
{
    ll n;
    cin >> n;

    solution(n);
}