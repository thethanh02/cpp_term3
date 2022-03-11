#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[10001], res[10001], n, j;
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a + n);
        int c = n / 2, l = n - c;
        j = 0;
        for (int i=0; i<n; i+=2) {
            if (j < l) res[i] = a[j];
            j++;
        }
        j = n - 1;
        for (int i=1; i<n; i+=2) {
            if (j >= l) res[i] = a[j];
            j--;
        }
        for (int i=0; i<n; i++) cout << res[i] << " ";
        cout << endl;
    }
}
