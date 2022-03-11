#include <bits/stdc++.h>
using namespace std;

const int oo = 1000000;
vector<int>check(oo, 1);
void eratos(){
    check[0] = check[1] = 0;
    for (int i=2; i<=sqrt(oo); i++)
        if (check[i])
            for (int j=i*i; j<=oo; j+=i) check[j] = 0;
}
int main() {
    eratos();
    int t;
    cin >> t;
    while (t--){
        long long n,m,n1,count = 0;
        cin >> n >> m;
        n1 = sqrt(n); m = sqrt(m);
        if(n!=1 && check[n1] && n1*n1<n) count--;
        for (int i=n1; i<=m; i++){
            if (check[i]) count ++;
        }
        cout << count << endl;
    }
}
