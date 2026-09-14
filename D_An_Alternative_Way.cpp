#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;

    vector<long long> a(n), b(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        sum += x;
        a[i] = sum;
    }
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        sum += x;
        b[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] > b[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
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