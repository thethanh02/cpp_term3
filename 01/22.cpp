#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    while(a!=0){
        long long t=a; a=b%a; b=t;
    }
    return b;
}
long long lcm(long long a,long long b){
    return a/gcd(a,b)*b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,i,tmp=1;
        cin >> n;
        for(i=1; i<=n; i++) tmp = lcm(tmp,i);
        cout << tmp << endl;
    }
    return 0;
}
