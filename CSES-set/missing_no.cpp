#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int num = 1;
    for (int j = 0; j < n - 1; j++)
    {
        if (v[j] != num)
        {
            cout << num;
            break;
        }
        num++;
    }
    if (num == n)
    {
        cout << num;
    }
}