#include <bits/stdc++.h>
using namespace std;

int n, m, a[1005][1005], row[4] = {-1, 0, 1, 0}, col[4] = {0, -1, 0, 1};
bool check[1005][1005];

int Test(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] && check[x][y])
        return true;
    return false;
}

int BFS(int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) return 0;
    if (!Test(x1, y1)) return -1;
    queue<pair<int, int>> q;
    q.push({x1, y1});
    check[x1][y1] = false;
    int ans = 1, t = 0, z = 1;
    while (!q.empty()) {
        pair<int, int> x = q.front();
        // if (x.first == c && x.second == d) return ans;
        for (int i = 0; i < 4; i++) {
            int a1 = x.first + row[i], a2 = x.second + col[i];
            if (Test(a1, a2)) {
                if (a1 == x2 && a2 == y2) return ans;
                q.push({a1, a2});
                check[a1][a2] = false;
                t++;
            }
        }
        q.pop();
        z--;
        if (z <= 0) {
            z = t;
            t = 0;
            ans++;
        }
    }
    return -1;
}

int main() {
    int t, i, j, x, b, c, d;
    cin >> t;
    while (t--) {
        cin >> n >> m >> x >> b >> c >> d;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> a[i][j];
                check[i][j] = true;
            }
        }
        cout << BFS(x, b, c, d) << endl;
    }
}
