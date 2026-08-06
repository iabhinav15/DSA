#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    char ch = s[0];
    char ch1 = s[n-1];
    int ans = 1;
    
    int freq[26] = {0};

    for(int i = 1; i < n-1; i++)
    {
        freq[s[i] - 'a']++;
    }

    int index = -1;
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] == 1 && (char)(i + 'a') != ch && (char)(i + 'a') != ch1) {
            index = i;
            break;
        }
    }


    if(index != -1) {
        for(int i = 1; i < n-1; i++) {
            if(s[i] == (char)(index + 'a')) {
                s[i] = s[i+1];
            }
        }
    }
    cout << s <<endl;
    for(int i = 0; i < n-1; i++) {
        if(s[i] != s[i+1]) {
            ans++;
        }
    }
    
    cout << ans << "\n";

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