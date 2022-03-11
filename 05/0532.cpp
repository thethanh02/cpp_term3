#include<bits/stdc++.h>
using namespace std;
struct diem {
    double x, y;
};
int main() {
    int t;
    cin >> t;;
    while(t--) {
        int n;
        cin >> n;
        struct diem d[n];
        for(int i = 0; i < n; i++) cin >> d[i].x >> d[i].y;
        double tong = 0;
        for (int i = 0; i < n; i++) {
            if (i == n - 1) tong += d[i].x * d[0].y - d[i].y * d[0].x;
            else tong += (d[i].x * d[i + 1].y - d[i].y * d[i + 1].x);
        }
        cout << fixed << setprecision(3) << tong / 2 << endl;
    }
}
