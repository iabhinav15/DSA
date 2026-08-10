#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

char flip(char ch) {
    return ch == '0' ? '1' : '0';
}



void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < s.size(); i+=2)
    {   
        if(s[i] == '0' || s[i] == '1'){
            for (int j = i+2; j < s.size(); j+=2)
            {
                if(s[j] == s[j-2] && s[j] != '?'){
                    cout << 0 << endl;
                    return;
                }
                else {
                    s[j] = flip(s[j-2]);
                }
            }
            for (int j = i-2; j >= 0; j-=2)
            {
                if(s[j] == s[j+2] && s[j] != '?'){
                    cout << 0 << endl;
                    return;
                }
                else {
                    s[j] = flip(s[j+2]);
                }
            }
            break;
        }
    }
    for (int i = 1; i < s.size(); i+=2)
    {   
        if(s[i] == '0' || s[i] == '1'){
            for (int j = i+2; j < s.size(); j+=2)
            {
                if(s[j] == s[j-2] && s[j] != '?'){
                    cout << 0 << endl;
                    return;
                }
                else {
                    s[j] = flip(s[j-2]);
                }
            }
            for (int j = i-2; j >=0; j-=2)
            {
                if(s[j] == s[j+2] && s[j] != '?'){
                    cout << 0 << endl;
                    return;
                }
                else {
                    s[j] = flip(s[j+2]);
                }
            }
            break;
        }
    }
    
    // even * odd
    cout << (n > 0 and s[0] == '?' ? 2 : 1) *  (n > 1 and s[1] == '?' ? 2 : 1)<< endl;

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