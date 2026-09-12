#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    long long x, y, k;
    cin >> x >> y >> k;

    long long d = y - x;
    long long total = 0;
    long long i = 0;

    while (i < k && (x + i) <= d) {
        total += d % (x + i);
        i++;
    }

    if (i < k) {
        total += (k - i) * d;
    }

    cout << total << "\n";
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