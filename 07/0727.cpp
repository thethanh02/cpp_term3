#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n], sum[n];
		for(ll &x:a) cin >> x;
        sum[0] = a[0]; sum[1] = max(a[0], a[1]);
        for(int i = 2; i < n; i++){
            sum[i] = max(sum[i-1], sum[i-2]+a[i]);
        }
        cout << sum[n-1] << endl;
    }
}
