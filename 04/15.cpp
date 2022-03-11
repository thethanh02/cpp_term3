#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long max_a = -pow(10, 8), min_b = -max_a, x;
        int n, m;
        cin >> n >> m;
        while(n--) {
            cin >> x;
            if(max_a < x) max_a = x;
        }
        while(m--) {
            cin >> x;
            if(min_b > x) min_b = x;
        }
        cout << max_a * min_b << endl;
    }
    return 0;
}
