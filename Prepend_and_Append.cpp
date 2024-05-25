#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int l = 0;
    int r = n-1;
    int ans = n;
    
    while(s[l] != s[r] and ans > 0) {
        l++;
        r--;
        ans -= 2;
    }
    
    cout << ans << endl;
}

int32_t main()
{
    int TC = 1;
    cin >> TC;
    while (TC--) 
        solve();
}
