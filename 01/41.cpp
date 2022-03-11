#include <bits/stdc++.h>
using namespace std;
vector<long long>f(101,1);
void fibo(){
    f[0] = 0; f[1] = f[2] = 1;
    for (int i=3; i<=92; i++)
        f[i] = f[i-1] + f[i-2];
}
int checkfib(long long n){
    for(int i=0; i<=92; i++){
        if(f[i] == n) return 1;
        if(f[i] > n) return 0;
    }
}
int main(){
    fibo();
    int t; long long n;
    cin >> t;
    while(t--){
        cin >> n;
        if(checkfib(n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
