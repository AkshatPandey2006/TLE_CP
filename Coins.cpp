#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    
    if(n%2 == 0) {
        cout << "Yes" << endl;
    }
    
    else if(n%k == 0) {
        cout << "Yes" << endl;
    }
    
    else if((n-k) % 2 == 0) {
        cout << "Yes" << endl;
    }
    
    else {
        cout << "No" << endl;
    }
}

int32_t main()
{
    int TC = 1;
    cin >> TC;
    while (TC--) 
        solve();
}
