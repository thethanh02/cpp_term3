#include <bits/stdc++.h>
int locphat(int n){
    while(n>0){
        int a = n%10;
        if(a!=0 && a!=6 && a!=8) return 0;
        n /= 10;
    }
    return 1;
}
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(locphat(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
