#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    string s1; cin>>s1;
    string s2; cin>>s2;

    if(s1 == s2) {
        cout << "YES" << endl;
        return;
    }

    int cnt_1 = 0;
    int cnt_2 = 0;

    for(int i = 0; i < n; i++) {
        if(s1[i] == '0') cnt_1++;
        if(s2[i] == '0') cnt_2++;
    }

    if(cnt_1 != cnt_2) {
        cout << "NO" << endl;
        return;
    }

    int cnt0 = 0;
    int cnt1 = 0;

    for(int i = 0; i < n; i++) {
        if(s1[i] == '0') cnt0++;
        if(s1[i] == '1') cnt1++;
    }


    if(cnt0 == cnt1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    return;


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