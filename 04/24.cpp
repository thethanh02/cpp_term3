#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, a[10001];
        cin >> k >> n;
        for(int i=0; i<k*n; i++) cin >> a[i];
        sort(a, a + k*n);
        for(int i=0; i<k*n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
