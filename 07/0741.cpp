#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y, p, res = 1;
        cin >> x >> y >> p;
        for(int i=0; i<y; i++) {
            res = ((res%p) * (x%p))%p;
        }
        cout << res << endl;
    }
    return 0;
}
