#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(a!=0){
        int t=a; a=b%a; b=t;
    }
    return b;
}
long long lcm(int a,int b){
    return (long long)a/gcd(a,b)*b;
}
int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << lcm(a,b) << " " << gcd(a,b) << endl;
    }
    return 0;
}
