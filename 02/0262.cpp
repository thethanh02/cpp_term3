#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll n, m;
        cin >> n >> m;
        ll sum = -m, i;
        for(i = 1; i <= n; i++) sum += i;
        if(sum % 2 != 0 || sum < 0) cout << "No\n";
        else{
            ll a = sum/2, b = a + m;
            if(gcd(a, b) != 1) cout <<  "No\n";
            else cout << "Yes\n";
        }
    }
    return 0;
}
