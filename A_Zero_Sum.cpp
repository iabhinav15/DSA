#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    int cnt1 = 0, cnt_1 = 0;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cnt1++;
        }
        if (x == -1)
        {
            cnt_1++;
        }
    }

    if (n % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    if (n == 2 && cnt1 != cnt_1)
    {
        cout << "NO\n";
        return;
    }

    if (cnt1 == cnt_1)
    {
        cout << "YES\n";
        return;
    }
    if (abs(cnt1 - cnt_1) % 4 == 0)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
    return;
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