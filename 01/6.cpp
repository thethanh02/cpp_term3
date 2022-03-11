#include <bits/stdc++.h>
int thuannghich(long long n){
    long long n1=n,sum=0;
    while(n1>0){
        sum *= 10;
        sum += n1%10;
        n1 /= 10;
    }
    if(sum==n) return 1;
    return 0;
}
using namespace std;
int main(){
    int t; long long n;
    cin >> t;
    while(t--){
        cin >> n;
        if(thuannghich(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
