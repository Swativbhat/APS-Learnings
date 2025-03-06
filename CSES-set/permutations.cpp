#include <bits/stdc++.h>
using namespace std;

void solution(long int n)
{
    if (n == 2)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    if (n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    else
    {
        for (long int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (long int j = 1; j <= n; j += 2)
        {
            cout << j << " ";
        }
    }
}

int main()
{
    long int n;
    cin >> n;
    solution(n);
}