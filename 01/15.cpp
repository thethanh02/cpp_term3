#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> n;
        for(int i=2; i<=n; i++){
            d=0;
            while(n%i==0){
                d++; n/=i;
            }
            if(d>=1) cout << i << " " << d << " ";
        }
        cout << endl;
    }
    return 0;
}
