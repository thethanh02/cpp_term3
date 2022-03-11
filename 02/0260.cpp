#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int b[n*n];
    for (int i = 0; i < n*n; i++) cin >> b[i];
    sort(b, b + n*n);
    int dong = n, cot = n, k = 0, p = 0, i, j;
    int a[n][n];
    while (k < n*n) {
        for (i = p; i < cot; i++)
            a[p][i] = b[k++];
        for (i = p+1; i < dong; i++)
            a[i][cot - 1] = b[k++];
        for (i = cot-2; i >= p; i--)
            a[dong - 1][i] = b[k++];
        for (i = dong-2; i > p; i--)
            a[i][p] = b[k++];
        dong--; cot--; p++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}
