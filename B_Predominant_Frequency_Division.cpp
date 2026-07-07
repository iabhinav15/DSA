#include "cp.hpp"
// #include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    bool firstPartition = false, secondPartition = false;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cnt1++;
        }
        else if (x == 2)
        {
            cnt2++;
        }
        else if (x == 3)
        {
            cnt3++;
        }

        if (i < n - 1)
        {
            if (cnt1 >= cnt2 + cnt3 && !firstPartition)
            {
                firstPartition = true;
            }
            else if (cnt1 >= cnt2 + cnt3 && firstPartition && x == 3 && !ok)
            {
                continue;
            }
            else if (firstPartition)
            {
                if (!ok)
                {
                    cnt1 = 0;
                    cnt2 = 0;
                    cnt3 = 0;
                    if(x == 1) cnt1++;
                    if(x == 2) cnt2++;
                    if(x == 3) cnt3++;
                }
                ok = true;
                if (cnt1 + cnt2 >= cnt3 && !secondPartition)
                {
                    secondPartition = true;
                }
            }
        }
    }
    if (firstPartition && secondPartition)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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