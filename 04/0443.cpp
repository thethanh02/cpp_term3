#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, vt = 1;
        cin >> n;
        int a[n];
        for(int i=1; i<n; i++) cin >> a[i];
        for(int i=1; i<n; i++) {
            if(a[i] != i) {
                vt = i; break;
            }
        }
        cout << vt << endl;
    }
    return 0;
}
