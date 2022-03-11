#include <bits/stdc++.h>
using namespace std;
// ham phi euler
int euler(int n){
    int d = 0, P = n;
    while (n%2 == 0){
        d++; n >>= 1;
    }
    if(d>0) P /= 2;
    for(int i=3; i<=sqrt(n); i+=2) {
        d = 0;
        while (n%i == 0) {
            d++; n /= i;
        }
        if(d>0) P *= (double)(i-1)/i;
    }
    if (n > 2) P *= (double)(n-1)/n;
    return P;
}
int nt(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return 0;
    return 1;
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << nt(euler(n)) << endl;
    }
}

/* cach binh thuong
int gcd(int a, int b){
    while(a!=0){
        int t = a; a = b%a; b = t;
    }
    return b;
}
int nt(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return 0;
    return 1;
}
int check(int n){
    int d = 0;
    for(int i=1; i<n; i++)
        if(gcd(i,n)==1) d++;
    if(nt(d)) return 1;
    return 0;
}
int main(){
    int t, x;
    cin >> t;
    while(t--){
        cin >> x;
        cout << check(x) << endl;
    }
}
*/
