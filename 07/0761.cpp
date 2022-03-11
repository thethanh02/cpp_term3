#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    while(a != 0){
        ll t = a; a = b%a; b = t;
    }
    return b;
}
ll gcdBigint(ll a, string snl){
    ll sum = 0;
    for(int i = 0; i < snl.size(); i++){
        sum *= 10;
        sum = (sum % a) + (snl[i] - '0') % a;
    }
    return gcd(a, sum);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a; string snl;
        cin >> a >> snl;
        cout << gcdBigint(a, snl) << endl;
    }
}