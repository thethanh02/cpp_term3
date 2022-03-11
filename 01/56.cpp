#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long b, p, count = 0;
        cin >> b >> p;
        long long q;
        if (b < p) {
            q = b;
            for (long long i = 1; i <= q; i++) {
                if ((i * i) % p == 1) count++;
            }
        }
        else{
            q = p;
            for (long long i = 1; i <= q; i++) {
                if ((i*i) % p == 1) count++;
            }
        }
        if (q == b) cout << count << endl;
        else {
            count *= b / p;
            q = b % p;
            for (long long i = 1; i <= q; i++) {
                if ((i * i) % p == 1) count++;
            }
            cout << count << endl;
        }
    }
}
