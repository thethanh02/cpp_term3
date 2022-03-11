#include <bits/stdc++.h>
using namespace std;
int n, a[1001];
pair <int, int> b[1001];
int minSwap() {
    int res = 0;
    vector<bool> vis(n, false);
    for(int i = 0; i < n; i++) {
        if (vis[i] || b[i].second == i)
            continue;
    
        int step = 0, j = i;
        while(!vis[j]) {
            vis[j] = 1;
            j = b[j].second;
            step++;
        }
        if(step > 0) res += (step - 1);
    }
    return res;
}
void solve() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i].first = a[i];
        b[i].second = i;
    }
    sort(b, b+n);
    cout << minSwap() << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}