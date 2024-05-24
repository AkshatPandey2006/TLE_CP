#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
    
  while (t--) {
    
      int n,k;
      cin >> n >> k;
      
      int arr[n];
      for(int i=0; i<n; i++) {
          cin >> arr[i];
      }
      
      bool check = false;
      for(int i=0; i<n; i++) {
          if(arr[i] == k) {
              check = true;
          }
      }
      
      if(check) {
          cout << "yes" << endl;
      }
      else {
          cout << "No" << endl;
      }
      
  }
}
