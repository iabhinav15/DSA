#include "cp.hpp"
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, k; cin>>n>>k;
    int arr[n];
    set<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        arr[i] = x;
        st.insert(x);
    }
    int uniqueElments = st.size();

    if(uniqueElments == 1) {
        cout << "1\n";
        return;
    }

    if(k % uniqueElments == 0) {
        ans++;
    }

    int size = n;
    bool ok = false;
    while(size > 0 && uniqueElments != 1) {
        if(abs(size - k) % uniqueElments == 0 && !ok) {
            ans++;
            ok = true;
        }
        size -= uniqueElments;
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