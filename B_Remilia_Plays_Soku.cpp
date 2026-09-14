// #include "cp.hpp"
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, x1, x2, k; cin>>n>>x1>>x2>>k;

    if(n <= 3) cout << 1 << endl;
    else cout << k + min(n - abs(x1-x2), abs(x1-x2)) << endl;
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