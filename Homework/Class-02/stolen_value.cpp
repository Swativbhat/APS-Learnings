#include <bits/stdc++.h>
using namespace std;

int stolenValues(vector<int> &values, int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return values[1];

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = values[1];

    for (int i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + values[i]);
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> values[i];
    }

    cout << stolenValues(values, n);
}