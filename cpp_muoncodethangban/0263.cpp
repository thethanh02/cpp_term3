#include <bits/stdc++.h>
using namespace std;

void process(vector < vector <pair<int, int>>>& sum, vector <vector <int>> v, int n) {
    for (int z = 1; z <= n; z++) {
        int j = 1, i = z;
        while (j <= n && i <= n) {
            sum[i][j].first = sum[i - 1][j - 1].first + v[i][j];
            sum[j][i].first = sum[j - 1][i - 1].first + v[j][i];
            i++, j++;
        }
    }
    for (int i = 1; i <= n; i++) reverse(v[i].begin(), v[i].end());
    for (int z = 1; z <= n; z++) {
        int j = 1, i = z;
        while (j <= n && i <= n) {
            sum[i][j].second = sum[i - 1][j - 1].second + v[i][j];
            sum[j][i].second = sum[j - 1][i - 1].second + v[j][i];
            i++, j++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n / 2; j++) {
            swap(sum[i][j].second, sum[i][n - j + 1].second);
        }
    }
}

void init(vector <vector <int>>& v, int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector <vector <int>> v(n + 2, vector <int>(n + 2, 0));
    vector < vector <pair<int, int>>> sum(n + 2, vector <pair<int, int>>(n + 2, { 0,0 }));
    init(v, n);
    process(sum, v, n);

    int ans = 0;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            int q = min(i, j) - 1;
            while (q >= 1) {
                int x = sum[i][j].first - sum[i - q - 1][j - q - 1].first;
                int y = sum[i][j - q].second - sum[i - q - 1][j + 1].second;
                ans = max(ans, x - y);
                q--;
            }
        }
    }
    cout << ans;
}