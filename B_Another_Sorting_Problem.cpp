#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;

    vector<int> v(n);

    int k = 0;

    for (int i = 0; i < n; i++)
    {   
        cin>>v[i];
    }

    for (int i = 0; i < n-1; i++)
    {   
        k = max(k, v[i]-v[i+1]);
    }

    for (int i = 1; i < n; i++)
    {   
        if(v[i-1] > v[i]){
             v[i] += k;
        }
    }

    if(is_sorted(v.begin(), v.end())) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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