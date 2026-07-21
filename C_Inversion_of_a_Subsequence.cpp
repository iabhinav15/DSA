#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int cnt_1 = 0;
    bool isSame = true;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == 1 && b[i] == 0)
            cnt_1++;
        if(a[i]!= b[i]) 
            isSame = false;
    }

    if(isSame){
        cout<<"0\n";
        return;
    }

    if (cnt_1 & 1)
        cout << "1\n";

    else if (!(cnt_1 & 1) && cnt_1 > 1)
        cout << "2\n";

    else if (cnt_1 == 0)
    {
        int extra_1 = 0, extra_0 = 0;

        for (size_t i = 0; i < n; i++)
        {
            if (a[i] == 1 && b[i] == 1)
                extra_1++;
            if (a[i] == 0 && b[i] == 0)
                extra_0++;
        }

        if (extra_1 && extra_0)
        {
            cout << "2\n";
        }
        else
            cout << "-1\n";
    }
    else
        cout << "-1\n";
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