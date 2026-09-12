#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int __gcd(int a, int b)
{
    if (b == 0)
        return a;

    return __gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort(a.begin(), a.end());

    int first = a[0];
    int last = a[n - 1];

    int gcd = __gcd(first, last);

    cout << gcd << endl;
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