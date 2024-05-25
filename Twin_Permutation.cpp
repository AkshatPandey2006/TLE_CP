#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++) {
        arr[i] = n + 1 - arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int32_t main()
{
    int TC = 1;
    cin >> TC;
    while (TC--) 
        solve();
}
