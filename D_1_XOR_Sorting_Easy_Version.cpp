#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> a(n);

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        a[i] = {x, i};
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        int xr = a[i].second^i;

        if(xr > 0) {
            int msb = 32 - __builtin_clz(xr);
            ans = max(ans, 1 << (msb-1));
        }
    }

    cout << ans << "\n";
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