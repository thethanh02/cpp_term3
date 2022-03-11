#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[10001];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        cout << a[k-1] << endl;
    }
}
