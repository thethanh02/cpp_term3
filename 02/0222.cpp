#include <bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, dem = 0, c[100000] = {0}, k=0;
		cin >> n;
		int a[n*n];
		for(int i = 0; i < n; i++){
			int b[100005] = {0};
			for(int j = 0; j < n; j++){
				int x;
				cin >> x;
				if(b[x] == 0) a[k++] = x;
				b[x]++;
			}
		}
		for(int i = 0; i < k; i++)	c[a[i]]++;
		for(int i = 0;i <= 100000; i++) if(c[i] == n) dem++;
		cout << dem << endl;
	}
}
