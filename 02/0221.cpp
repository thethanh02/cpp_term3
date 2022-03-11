#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int b[200][200];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) cin >> b[i][j];
        int dong = n, cot = m, k = 1, p = 0, i, j;
        int a[n][m];
        while (k < n*m) {
            for (i = p+1; i < cot; i++){
                a[p][i] = b[p][i - 1]; k++;
            }
            for (i = p+1; i < dong; i++){
                a[i][cot - 1] = b[i - 1][cot - 1]; k++;
            }
            for (i = cot-2; i >= p; i--){
                a[dong - 1][i] = b[dong - 1][i + 1]; k++;
            }
            for (i = dong-2; i >= p; i--){
                a[i][p] = b[i + 1][p]; k++;
            }
            dong--; cot--; p++;
        }
        int x = n/2, y = m/2;
        if(n%2 == 1 && m == n) a[x][x] = b[x][x];
        if(m-n > 1 && n%2 == 1){
            for(i = x+1; i < m-x; i++) a[x][i] = b[x][i-1];
            a[x][x] = b[x][m-x-1];
        }
        if(n-m > 1 && m%2 == 1){
            for(i = y+1; i < n-y; i++) a[i][y] = b[i-1][y];
            a[y][y] = b[n-y-1][y];
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
