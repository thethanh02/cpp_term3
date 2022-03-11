#include <bits/stdc++.h>
using namespace std;

int check(vector <vector <char>> v, int n, int i, int j, int size) {
    for (int z = j; z < j + size; z++) {
        if (v[i][z] == 'O' || v[i + size - 1][z] == 'O') return 0;
    }
    for (int z = i + 1; z < i - 1 + size; z++) {
        if (v[z][j] == 'O' || v[z][j + size - 1] == 'O') return 0;
    }
    return size;
}

void process(vector <vector <char>> v, int n, int& ans) {
    for (int i = n; i >= 2; i--) {
        for (int j = 0; j <= n - i; j++) {
            for (int k = 0; k <= n - i; k++) {
                ans = max(ans, check(v, n, j, k, i));
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        vector <vector <char>> v(n, vector <char>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> v[i][j];
        process(v, n, ans);
        cout << ans << endl;
    }
}