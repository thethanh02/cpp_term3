#include <bits/stdc++.h>
using namespace std;
int res(int a[], int n, int x) {
    int sum = 0, m = n + 1;
    int l = 0, r = 0;
    while (r < n) {
        while(sum <= x && r < n)
            sum += a[r++];

        while(sum > x && l < n) {
            m = min(m, r - l);
            sum -= a[l++];
        }
    }
    if(m > n) m = -1;
    return m;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int &i:a) cin >> i;
        cout << res(a, n, x) << endl;
    }
}
