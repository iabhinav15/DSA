#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, m; cin>>n>>m;

    vector<int> a(n+1);
    vector<int> b(m+1);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    reverse(b.begin(), b.end());

    int ber = 0;
    for (int i = 0; i < n; i++)
    {
        ber += (a[i] - a[i+1] + 1);
    }

    int ver = 0;
    for (int i = 0; i < m; i++)
    {
        ver += (abs(b[i] - b[i+1]) + 1);
    }

    if(ber >= ver) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
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