#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int a, b, c; cin>>a>>b>>c;

    int maxi = max(a, max(b, c));
    int mini = min(a, min(b, c));


    if(maxi == a) {
        int sum = b + c;
        if(sum >= maxi) {
            cout << maxi - mini <<endl;
            return;
        }
        else {
            a = b + c;
            cout << a - mini <<endl;
            return;
        }
    }
    if(maxi == b) {
        int sum = a + c;
        if(sum >= maxi) {
            cout << maxi - mini <<endl;
            return;
        }
        else {
            b = a + c;
            cout << b - mini <<endl;
            return;
        }
    }
    if(maxi == c) {
        int sum = b + a;
        if(sum >= maxi) {
            cout << maxi - mini <<endl;
            return;
        }
        else {
            c = a + b;
            cout << c - mini <<endl;
            return;
        }
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