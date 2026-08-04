#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int min = INT_MAX;
    bool isGap = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] < min)
        {
            min = v[i];
        }
        if (i > 0 && abs(v[i] - v[i - 1]) <= 1)
        {
            isGap = false;
        }
    }

    if (n & 1)
    {
        cout << "NO\n";
        return;
    }

    if (!isGap)
    {
        cout << "NO\n";
        return;
    }

    if (v[0] == min)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}