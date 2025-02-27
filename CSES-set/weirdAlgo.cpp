#include <iostream>
#include <vector>

using namespace std;

void weirdAlgo(vector<long long int> &v, long long int n)
{
    v.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            v.push_back(n);
        }
        else
        {
            n = (n * 3) + 1;
            v.push_back(n);
        }
    }
}

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v;
    weirdAlgo(v, n);
    for (auto it : v)
    {
        cout << it << " ";
    }
}