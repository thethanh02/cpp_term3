#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll gcd(ll a, ll b){
    while(a != 0){
        ll t = a; a = b%a; b = t;
    }
    return b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        ll ucln = a[0], h = 1;
        for(int i = 0; i < n; i++){
            h = (h*a[i]) % mod;
            ucln = gcd(ucln, a[i]);
        }

        ll res = 1;
		while(ucln > 0){
			if(ucln%2 == 1) res = res * h%mod;
			h = h * h%mod;
			ucln /= 2;
		}
		cout << res << endl;
    }
    return 0;
}
