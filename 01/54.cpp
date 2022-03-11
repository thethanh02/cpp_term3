#include <bits/stdc++.h>
using namespace std;
int check(int n, long long k){
    long long s = 0;
    for(int i=1; i<=n; i++) s += i%k;
    if(s==k) return 1;
    return 0;
}
int main(){
    int t,n; long long k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << check(n,k) << endl;
    }
}
