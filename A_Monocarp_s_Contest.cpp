#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int count_0 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] == 0)
            count_0++;
    }

    if (count_0 == 0 || count_0 == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (v[0] == 0 && v[n - 1] == 0)
    {
        cout << 0 << endl;
        return;
    }

    bool isFirstEASY = false;
    bool isLastEASY = false;

    int count = 0;

    if(v[0] != 0 && v[n-1] != 0 && count_0 >= 2) count += 2;
    
    else if((v[0] == 0  && v[n-1] != 0 && count_0 >= 1) || (v[0] != 0  && v[n-1] == 0 && count_0 >= 1)) count += 1;

    cout << count << endl;
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