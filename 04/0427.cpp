#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, d = 0; // dem so 0 trong mang
        cin >> n;
        int v[n];
        for(int i=0; i<n; i++) { // nhap
            cin >> v[i];
            if(v[i] == 0) d++;
        }
        for(int i=0; i<n-1; i++) { //lam theo yeu cau de
            if(v[i+1] != 0 && v[i] == v[i+1]) {
                v[i] *= 2;
                v[i+1] = 0;
                d++;
            }
        }
        // in ra
        for(int i=0; i<n; i++) {
            if(v[i] != 0) cout << v[i] << " ";
        }
        for(int i=0; i<d; i++) cout << "0 ";
        cout << endl;
    }
    return 0;
}
