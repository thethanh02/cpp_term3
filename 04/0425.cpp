#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        queue <int> b, c;
        sort(a, a + n);
        for (int i = 0; i < n; i++) {
            if (n % 2 == 0) {
                if (i < n / 2) b.push(a[i]);
                else c.push(a[i]);
            }
            else {
                if (i <= n / 2) b.push(a[i]);
                else c.push(a[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << b.front() << " ";
                b.pop();
            }
            else {
                cout << c.front() << " ";
                c.pop();
            }
        }
        cout << endl;
    }
}
