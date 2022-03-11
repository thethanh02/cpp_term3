#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][200], int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin >> a[i][j];
}
void in(int a[][200], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << a[i][j] << " ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
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
