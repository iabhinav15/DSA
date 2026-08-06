#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int maxOfT(int a, int b, int c)
{
    return max(a, max(b, c));
}

int minOfT(int a, int b, int c)
{
    return min(a, min(b, c));
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;

    
    while(a != b && b != c && a != c) {
        int max = maxOfT(a, b, c);
        int min = minOfT(a, b, c);

        if(max == a) {
            a--;
        }
        else if(max == b) {
            b--;
        }
        else if(max == c) {
            c--;
        }
        if(min == a) {
            a++;
        }
        else if(min == b) {
            b++;
        }
        else if(min == c) {
            c++;
        }
        count++;
    }

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