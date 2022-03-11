#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n], m = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < k; i++) m += a[i];
        int tmp = m, vt = 0;
        for(int i = k; i < n; i++){
            tmp = tmp + a[i] - a[i-k];
            if(m < tmp){
                m = tmp;
                vt = i - k + 1;
            }
        }
        for(int i = vt; i < vt+k; i++) cout << a[i] << " ";
		cout << endl;
    }
}
