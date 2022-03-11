#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        long long res = a[0];
        for(int i = 0; i < n; i++){
            long long m = a[i];
            for(int j = i+1; j < n; j++){
                res = max(res, m);
                m *= a[j];
            }
            res = max(res, m);
        }
        cout << res << endl;
    }
    return 0;
}
