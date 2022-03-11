#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, d = 0;
        cin >> n;
        m = sqrt(n);
        if(n%2!=0) cout << "0\n";
        for(int i=1; i<=m; i++){
            if(n%i==0){
                if(i%2==0) d++;
                if((n/i)%2==0) d++;
            }
        }
        if(m*m==n && m%2==0) d--;
        if(d) cout << d << endl;
    }
    return 0;
}
