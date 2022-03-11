#include <bits/stdc++.h>
using namespace std;
int luckynum(int n){
    if((n%100)==86) return 1;
    return 0;
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(luckynum(n)) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
