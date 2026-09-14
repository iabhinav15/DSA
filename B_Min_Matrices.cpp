#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, k; cin>>n>>k;

    if(k < n || k >= 2*n) {
        cout << -1 << endl;
        return;
    }

    vector<vector<int>> v(n, vector<int> (n, 0));

    int x = k - n;
    for (int i = 0; i <= x; i++)
    {
       v[0][i] = i+1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[i][j] == 0 && j == i) {
                v[i][j] = x+1+i;
            }
        }
    }
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[i][j] == 0 && j != i) {
                v[i][j] = k+count;
                count++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
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