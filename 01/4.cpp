#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i,n,sum=0,tmp=1;
    cin >> n;
    for(i=1; i<=n; i++){
        tmp *= i;
        sum += tmp;
    }
    cout << sum;
}
