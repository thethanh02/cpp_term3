#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a[100001], m = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (m < a[i]) m = a[i];
        }
        cout << m << endl;
    }
}
