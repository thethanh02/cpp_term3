#include <bits/stdc++.h>
using namespace std;
int main(){
    double i,n,sum=0;
    cin >> n;
    for(i=1; i<=n; i++) sum += 1/i;
    cout << setprecision(4) << fixed <<  sum;
    return 0;
}
