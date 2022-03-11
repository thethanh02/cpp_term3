#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; int d=0;
    cin >> n;
    while (n%2 == 0){
        d++; n >>= 1;
    }
    if(d>0) cout << 2 << " " << d << endl;
    for(int i=3; i<=sqrt(n); i+=2) {
        d = 0;
        while (n%i == 0) {
            d++; n /= i;
        }
        if(d>0) cout << i << " " << d << endl;
    }
    if (n > 2) cout << n << " 1";
    return 0;
}
