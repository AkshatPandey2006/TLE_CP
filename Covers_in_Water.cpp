#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int max_count = 0;
        int empty_count = 0;
        int cont_count = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '.') {
                empty_count++;
                cont_count++;
                max_count = max(max_count, cont_count);
            }
            else {
                cont_count = 0;
                max_count = max(max_count, cont_count);
            }
        }
        
        if(max_count >= 3) {
            cout << "2" << endl;
        }
        else {
            cout << empty_count << endl;
        }
    }
}
