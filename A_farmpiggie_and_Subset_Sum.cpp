#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) cout << i-1;
        else if(i % 2 != 0) cout << i+1;
        cout<<" ";
    }

    cout<<"\n";
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