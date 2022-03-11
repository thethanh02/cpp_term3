#include <bits/stdc++.h>
using namespace std;

vector<long long>f(101,1);
void fibo(){
    f[0] = 0; f[1] = f[2] = 1;
    for (int i=3; i<=92; i++)
        f[i] = f[i-1] + f[i-2];
}
int main() {
    fibo();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}
