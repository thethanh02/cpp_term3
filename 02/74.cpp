#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> d(1000000, 0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            d[a[i]]++;
        }
        for(int i=0; i<=1000000; i++){
            if(d[i] == 1) d[i] = 0;
            if(d[i] > 1) sum += d[i];
        }
        cout << sum << endl;
    }
    return 0;
}
