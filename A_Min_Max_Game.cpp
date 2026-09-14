#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;

    int count_0 = 0;
    int count_1 = 0;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(x == 0) count_0++;
        else if(x == 1) count_1++;
    }

    if(count_1 >= count_0) cout << "Bessie" << endl;
    else cout << "Elsie" << endl;
    
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