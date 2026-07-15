#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int __gcd(int a, int b) {
    if(b == 0) return a;
    return __gcd(b, a % b);
}

void solve()
{
    int n, x, y; cin>>n>>x>>y;
    bool isOk = true;
    int gcd = __gcd(x, y);

    for (int i = 1; i <= n; i++)
    {
        int el; cin>>el;

        if(abs(i - el) % gcd == 0) {
            continue;
        }
        else {
            isOk = false;
        }
    }

    cout<<(isOk ? "YES\n" : "NO\n");

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