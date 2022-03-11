#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[1001], minn = pow(10,5), sub = -1;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            if(minn > a[i]) minn = a[i];
            if(a[i] > minn) sub = max(a[i] - minn, sub);
        }
        cout << sub << endl;
    }
    return 0;
}
