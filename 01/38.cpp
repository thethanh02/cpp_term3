#include <bits/stdc++.h>
using namespace std;
int nt(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        int a=2;
        cin >> n;
        while(a<=n/2){
            if(nt(a) && nt(n-a)){
                cout << a << " " << n-a; break;
            }
            a++;
        }
        cout << endl;
    }
}
