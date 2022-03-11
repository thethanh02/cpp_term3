#include <bits/stdc++.h>
using namespace std;
int n, m, a[110][110];
void solve() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];

    int i = 0, j = 0;
    cout << a[0][0] << " ";
    while(1) {
        
        if(j < m - 1) j++;
        else i++;
        while(j >= 0 && i < n) {
            cout << a[i][j] << " ";
            i++; j--;
        }
        i--; j++;
        // if(i == n - 1 && j == m - 1) break;
        if(i < n - 1) i++;
        else j++;
        while(i >= 0 && j < m) {
            cout << a[i][j] << " ";
            j++; i--;
        }
        j--; i++;
        if(i == n - 1 && j == m - 1) break;
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}