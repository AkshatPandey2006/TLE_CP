#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n,k;
        cin >> n >> k;
        
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        
        int max_petrol = 0;
        for(int i=0; i<n-1; i++) {
            max_petrol = max(max_petrol, arr[i+1] - arr[i]);
        }
        
        int first_distance = (arr[0] - 0);
        max_petrol = max(max_petrol, first_distance);
        
        int last_distance = (k-arr[n-1])*2;
        max_petrol = max(max_petrol, last_distance);
        
        cout << max_petrol << endl;
    }
}
