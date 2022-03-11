#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][200], int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin >> a[i][j];
}
void in(int a[][200], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2 == 0) cout << a[i][j] << " ";
            else cout << a[i][n-j-1] << " ";
        }
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[200][200];
        cin >> n;
        nhap(a,n);
        in(a,n);
    }
    return 0;
}
