#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    vector<int> a(n);

    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool isSwaped = false;
    // swap opration
    for (int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1] && !isSwaped) {
            for (int j = 0; j < n; j++)
            {
                if(a[i] != a[j] && a[j] == a[j+1]) {
                    swap(a[i], a[j]);
                    isSwaped = true;
                    break;
                }
                else if(j == n-1) {
                    swap(a[i], a[j]);
                    isSwaped = true;
                }
            }
            
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        if(a[i] != a[i+1]) {
            ans++;
        }
    }

    cout << ans << endl;

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