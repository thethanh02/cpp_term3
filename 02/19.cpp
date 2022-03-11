#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][110], int n, int m){
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin >> a[i][j];
}
void xuly(int a[][110], int n, int m, int b[][110]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 1){
                for(int g=0; g<n; g++) b[g][j] = 1;
                for(int g=0; g<m; g++) b[i][g] = 1;
            }
        }
    }
}
void in(int b[][110], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, a[110][110], b[110][110] = {0};
        cin >> n >> m;
        nhap(a,n,m);
        xuly(a,n,m,b);
        in(b,n,m);
    }
    return 0;
}
