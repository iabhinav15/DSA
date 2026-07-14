#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    if(n == 1){
        cout << 1 << "\n";
        return;
    }
    else if(n == 2) {
        cout << -1 << "\n";
        return;
    }
    ll arr[n];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    for(int i = 3; i < n; i++){
        arr[i] = 2 * arr[i-1];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << "\n";
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