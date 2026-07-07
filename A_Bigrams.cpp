#include "cp.hpp"
// #include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int k;
    cin >> k;
    int count = 0;
    bool found = false;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        if (x >= 3)
        {
            found = true;
        }
        else if (x >= 2)
        {
            count++;
            if (count > 1)
            {
                found = true;
            }
        }
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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