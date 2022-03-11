#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005][1005], cnt;

void back(int i, int j, int s) {
    if (i == n && j == n) {
        if (s == k) cnt++;
        return;
    }
    if (s > k) return;
    if (i + 1 <= n) back(i + 1, j, s + a[i + 1][j]);
    if (j + 1 <= n) back(i, j + 1, s + a[i][j + 1]);
}

void prs() {
    cnt = 0;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    back(1, 1, a[1][1]);
    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) prs();
}