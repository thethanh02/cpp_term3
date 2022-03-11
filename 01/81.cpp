#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t,a,x,y;
    cin >> t;
    while(t--){
        cin >> a >> x >> y;
        for(ll i=0; i<__gcd(x, y); i++){
            cout << a;
        }
        cout << endl;
    }
}
