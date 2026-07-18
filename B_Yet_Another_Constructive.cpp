#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    vector<ll> v(n);
    ll sum = 0;
    bool ok = true;

    for (ll i = 0; i < k - 1; i++)
    {
        v[i] = m + 1;
        sum += m + 1;
        if (sum % m == 0)
        {
            ok = false;
            break;
        }
    }

    v[k - 1] = max(0LL, (1LL * k * m - sum));

    for (ll i = k; i < n; i++)
    {
        v[i] = m + 1;
    }

    if (ok)
    {
        cout << "YES\n";
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
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