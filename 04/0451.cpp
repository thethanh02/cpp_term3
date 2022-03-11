#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k, d = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cin >> k >> x;
        int vt = lower_bound(a.begin(), a.end(), x)-a.begin();
        int l = vt - 1, r;
        if(a[vt] == x) r = vt + 1;
		else r = vt;
        for(int i = k/2-1; i >= 0; i--){
			cout << a[l-i] << " ";
		}
		for(int i = 0; i < k/2; i++){
			cout << a[r+i] << " ";
		}
        cout << endl;
    }
    return 0;
}
