#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    int final_count = 0;
    
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            count++;
            final_count = max(count, final_count);
        }
        else {
            count = 0;
            final_count = max(count, final_count);
        }
    }
    
    cout << final_count << endl;
}

int32_t main()
{
    int TC = 1;
    cin >> TC;
    while (TC--) 
        solve();
}
