#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c = 0, count = 0;
        cin >> n;
        for(int i=2; i<=n; i++) {
            int d = 0;
            while (n%i == 0) {
                d++; count++;
                n /= i;
            }
            if(d>1){
                c = 1;
                cout << "0 " << endl;
                break;
            }
        }
        if(!c){
            if(count==3) cout << "1 " << endl;
            else cout << "0 " << endl;
        }
    }
    return 0;
}
