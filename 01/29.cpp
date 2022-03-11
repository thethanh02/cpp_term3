#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,d=0;
        cin >> n >> k;
        for(int i=1; i<=n; i++){
            int i1=i;
            while(i1%k==0){
                d++; i1 /= k;
            }
        }
        cout << d << endl;
    }
    return 0;
}
