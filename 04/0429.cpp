#include <bits/stdc++.h>
using namespace std;
int minFix(vector<int> a, int n, int k) {
    int count = 0;
    for (int i = 1; i <= k; ++i)
        if (a[i] == 1) count++;
    int bad = k - count;
    int ans = bad;
    for (int i = 1, j = k+1; j <= n; i++, j++) {
        if (a[i] == 0) bad--;
        if (a[j] == 0) bad++;
        ans = min(ans, bad);
    }
    return ans;
}
int main() {
    int n, k, b, x;
    cin >> n >> k >> b;
    vector<int> a(n+1, 1);
    for(int i = 0; i < b; i++){
        cin >> x;
        a[x] = 0;
    }
    cout << minFix(a,n,k) << endl;
    return 0;
}
