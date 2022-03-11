#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][100], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) cin >> a[i][j];
    }
}
int main() {
    int n, m, a[100][100], b[100][100];
    cin >> n; nhap(a, n);
    cin >> m; nhap(b, m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] *= b[i%m][j%m];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
