#include <bits/stdc++.h>
using namespace std;
const int lim = 100001;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, b[lim] = {0};
        ll a[lim];
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] >= 0 && a[i] < n) b[a[i]]++;
        }
        for(int i=0; i<n; i++) {
            if(b[i] == 0) cout << "-1 ";
            else cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
