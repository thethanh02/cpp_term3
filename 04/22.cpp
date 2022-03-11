#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<ll> v;
        ll n, x, d = 0;
        cin >> n;
        while(n--){
            cin >> x;
            if(x == 0) d++;
            v.push_back(x);
        }
        for(ll i=0; i<v.size(); i++)
            if(v[i] != 0) cout << v[i] << " ";
        for(ll i=0; i<d; i++) cout << "0 ";
        cout << endl;
    }
    return 0;
}
