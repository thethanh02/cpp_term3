#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = 4*n, a[m][m], cnt = 1;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m; j++) a[i][j] = cnt++;
        int dcr = m, k = 0, l = -1, r = 0, tmp;
        int b[m*m], c[m*m];
        while (dcr) {
            tmp = dcr;
            while(tmp--){
                ++l;
                b[k] = a[l][r];
                c[k++] = a[m-l-1][m-r-1];
            }
            dcr -= 2, tmp = dcr;
            while(tmp--){
                ++r;
                b[k] = a[l][r];
                c[k++] = a[m-l-1][m-r-1];
            }
            tmp = dcr;
            while(tmp--){
                --l;
                b[k] = a[l][r];
                c[k++] = a[m-l-1][m-r-1];
            }
            dcr -= 2, tmp = dcr;
            while(tmp--){
                --r;
                b[k] = a[l][r];
                c[k++] = a[m-l-1][m-r-1];
            }
        }
        for (int i = k-1; i >= 0; i--) cout << c[i] << " ";
        cout << endl;
        for (int i = k-1; i >= 0; i--) cout << b[i] << " ";
        cout << endl;
    }
}
