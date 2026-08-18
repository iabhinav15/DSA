#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, m; cin>>n>>m;

    vector<bool> a(26, false);
    vector<string> b(m);


    for(int i = 0; i < n; i++) {
        string s; cin>>s;
        char ch = s[0] - 32;

        a[ch - 'A'] = true; 
    }

    for(int i = 0; i < m; i++) {
        string s; cin>>s;
        b[i] = s;
    }

    bool ok = true;
    for(int i = 0; i < m; i++) {
        string s = b[i];
        for (int j = 0; j < s.size(); j++)
        {
            if(a[s[j] - 'A'] == true) {
                continue;
            }
            else {
                ok = false;
                break;
            }
        }
        if(ok == false) break; 
    }

    if(ok) cout << "YES" << endl;
    else if(!ok) cout << "NO" << endl;
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