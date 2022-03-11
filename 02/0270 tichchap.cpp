#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tichchap(ll n, ll m, ll a[][310], ll b[][10]){
    ll c[310][310] = {0}, sum = 0;
    ll x, y, i, j;
    for(x = 0; x < n-2; x++){
        for(y = 0; y < m-2; y++){
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    c[x][y] += a[x+i][y+j] * b[i][j];
                }
            }
            sum += c[x][y];
        }
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll i, j, n, m, a[310][310], b[10][10];
        cin >> n >> m;
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++) cin >> a[i][j];
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++) cin >> b[i][j];
        cout << tichchap(n,m,a,b) << endl;
    }
}
