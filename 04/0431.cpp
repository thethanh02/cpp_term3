#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k; long long count = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < n; i++){
            int x = a[i] + k;
        	count += (lower_bound(a+i, a+n, x) - a - i - 1);
        }
        cout << count << endl;
    }
}
