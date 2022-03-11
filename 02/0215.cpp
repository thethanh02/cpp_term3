#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, sa = 0, sb = 0;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++){
            cin >> a[i];
            sa += a[i];
		}
		for(int i = 0; i < m; i++){
            cin >> b[i];
            sb += b[i];
		}
		int vt = min(n, m), tmp;
		int tb = 0, ta = 0, mx = 0;
		for(int i = 0; i < vt; i++){
            tb += b[i]; ta += a[i];
		    tmp = ta + sb - tb;
		    mx = max(mx, tmp);
		    tmp = tb + sa - ta;
		    mx = max(mx, tmp);
		}
		cout << mx << endl;
    }
}
