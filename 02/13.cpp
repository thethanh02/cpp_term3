#include <bits/stdc++.h>
using namespace std;

vector<int> f(20,1);
vector<int> check(1000,0);
void fibo(){
    f[0] = 0;
    check[0]++; check[1]++;
    for (int i=3; i<17; i++){
        f[i] = f[i-1] + f[i-2];
        check[f[i]]++;
    }
}
int main() {
    fibo();
    int t;
    cin >> t;
    while (t--){
        int n, a[110];
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++)
            if(check[a[i]]) cout << a[i] << " ";
        cout << endl;
    }
}
