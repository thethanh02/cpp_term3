#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b){
    return a/__gcd(a,b)*b;
}
long long lcm_n(long long x, long long y, long long z, long long n){
    long long m = pow(10,n-1), k = 10*m, a = lcm(lcm(x,y),z);
    if(k <= a) return -1;
    if(m%a == 0) return m;
    long long kq = a*(1 + m/a);
    if(kq >= k) return -1;
    return kq;
}
int main(){
    long long t,x,y,z,n;
    cin >> t;
    while(t--){
        cin >> x >> y >> z >> n;
        cout << lcm_n(x,y,z,n) << endl;
    }
}
