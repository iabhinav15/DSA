#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, k; cin>>n>>k;
    string ans = "";

    for(int i = 0; i < k; i++)
    {
        ans += '0';
    }

    int mid = n/2;

    if(!n&1) mid = n/2 + 1;



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