#include <bits/stdc++.h>
using namespace std;

int assignmentProblem(vector<vector<int>> &c, int n)
{
    int size = pow(2, n);
    vector<int> dp(size, INT_MAX);
    dp[0] = 0;

    for (int mask = 0; mask < size; mask++)
    {
        int x = __builtin_popcount(mask); //counts the number bit set in mask
        for (int j = 0; j < n; j++)
        {
            if ((mask & (1 << j)) == 0) //jth bit is not set
            {
                dp[mask | (1 << j)] = min(dp[mask | (1 << j)], dp[mask] + c[x][j]);
            }
        }
    }
    return dp[size - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> c(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c[i][j];
        }
    }

    cout << "Minimum cost is:" << assignmentProblem(c, n) << endl;
}