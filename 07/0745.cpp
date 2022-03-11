#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> f(1000, 1);
const ll mod = 1e9 + 7;
void fibo(){
    f[0] = 0;
    for (int i=3; i<=1000; i++) {
        f[i] = (f[i-1]%mod + f[i-2]%mod) % mod;
    }
}
int main() {
    fibo();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}
