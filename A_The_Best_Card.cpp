#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    bool ans = true;

    for(int i = 2; i * i <= n+1; i++) {
        if((n + 1) % i == 0) {
            ans = false;
            break;
        }
    }

    if(ans) {
        cout << "YES\n";
    } else {
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