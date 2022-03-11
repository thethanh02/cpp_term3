#include <bits/stdc++.h>
using namespace std;
int nt(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return 0;
    return 1;
}
int tang(int n){
    while(n>=10){
        int t = n%10, s = (n%100)/10;
        if(t<=s) return 0;
        n /= 10;
    }
    return 1;
}
int giam(int n){
    while(n>=10){
        int t = n%10, s = (n%100)/10;
        if(t>=s) return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        int n1=1,n2=10,d=0;
        cin >> n;
        for(int i=1; i<n; i++){
            n1 *= 10; n2 *= 10;
        }
        for(int i=n1; i<=n2; i++) if((tang(i) || giam(i)) && nt(i)) d++;
        cout << d << endl;
    }
    return 0;
}

