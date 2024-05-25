#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n; 
    
    int arr[n];
    bool check = false;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            check = true;
        }
    }
    
    int mini = INT_MAX;
    for(int i=0; i<n; i++) {
        if(abs(arr[i]) <= mini) {
            mini = abs(arr[i]);
        }
    }
    
    if(check) {
        cout << 0 << endl;
    }
    else {
        cout << mini << endl;
    }
}
