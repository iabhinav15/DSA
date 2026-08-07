#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int mx = 0; int maxFreq = 0; int ans = 0;

    for(auto it: mp) {
        if(maxFreq < it.second) {
            mx = it.first;
            maxFreq = it.second;
        }
    }

    ans = accumulate(a.begin(), a.end(), 0LL);

    if(maxFreq > (n-maxFreq)) {
        long long res = maxFreq - (n-maxFreq) - 2;
        res = max(res,0LL);
        res *= mx;
        ans -= res;
    }

    cout << ans <<endl;

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