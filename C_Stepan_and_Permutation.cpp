#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, x, y; cin>>n>>x>>y;
    bool isOk = true;

    for (int i = 1; i <= n; i++)
    {
        int el; cin>>el;

        if(abs(i - el) % 2 == 0) {
            if(x % 2 == 0 || y % 2 == 0) continue;
            else isOk = false; 
        }
        else if(abs(i - el) % 2 != 0) {
            if(x % 2 != 0 || y % 2 != 0) continue;
            else isOk = false; 
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