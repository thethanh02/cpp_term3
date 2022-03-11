#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n, vt1 = -1, vt2 = -2;
		cin >> n;
		int a[n+1], l, r;
		for(int i = 0; i < n; i++) cin >> a[i];
		cin >> l >> r;
		for(int i = l; i < r; i++){
			if(a[i] > a[i+1]){
				vt1 = a[i];
				break;
			}
		}
		for(int i = r; i > l; i--){
			if(a[i-1] < a[i]){
				vt2 = a[i];
				break;
			}
		}
		if(vt1 == -1 || vt1 == vt2) cout << "Yes\n";
		else cout << "No\n";
	}
}
