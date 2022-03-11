#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--) {
        ll n, x, a[2010], i;
        cin >> n >> x;
        for(i=n-1; i>=0; i--) cin >> a[i];
        ll s = a[0], k = 1, tmp;
        for(i=1; i<n; i++){
            k = (k*x) % mod;
            tmp = (a[i]%mod) * k;
            s = (s%mod + tmp%mod) % mod;
        }
        cout << s << endl;
    }
    return 0;
}
