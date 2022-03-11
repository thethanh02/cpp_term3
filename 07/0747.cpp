#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int count[10000] = {0}, n = 0;
        cin >> s;
        int vt = s.find("100"), vttruoc = vt;
        while(vt != -1) {
            if(vttruoc == vt || vttruoc == vt+1) count[n]++;
            else {
                n++;
                count[n]++;
            }
            vttruoc = vt;
            s.erase(vt, 3);
            vt = s.find("100");
        }
        int m = 0;
        for(int i=0; i<=n; i++) m = max(m, count[i]);
        cout << 3*m << endl;
    }
    return 0;
}
