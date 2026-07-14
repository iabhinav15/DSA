#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    ll extraBooks = 0;
    bool ok = true;
    for (size_t i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= i + 1)
        {
            extraBooks += (x - i - 1);
        }
        else
        {
            if (x + extraBooks >= i + 1)
            {
                extraBooks -= (i + 1 - x);
            }
            else
            {
                ok = false;
            }
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
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