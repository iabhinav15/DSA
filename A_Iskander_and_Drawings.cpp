#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int maxLengthOfLine = 0;
    int tempLength = 0;
    
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i] == '#'){
            tempLength++;
            maxLengthOfLine = max(maxLengthOfLine, tempLength);
        }
        else{
            tempLength = 0;
        }
    }

    cout << (maxLengthOfLine + 1) / 2 << "\n";
    
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