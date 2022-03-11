#include<bits/stdc++.h>
using namespace std;
void nhan(string &str, string a, string b){
    int *res, i, j, n = a.size(), m = b.size();
    res = new int[n + m + 1];
    for(i = 0; i <= n+m; i++) res[i] = 0;
    for(i = n-1; i >= 0; i--){
        for(j = m-1; j >= 0; j--){
            res[i+j+1] += (a[i]-'0') * (b[j]-'0');
        }
    }
    for(i = n+m; i >= 0; i--){
        if(res[i] > 9){
            res[i-1] += res[i]/10;
            res[i] %= 10;
        }
    }
    for(i = 0; i < n+m; i++) str += (res[i] + '0');
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b, str = "";
        long long i, m, kq = 0;
        cin >> a >> b >> m;
        nhan(str, a, b);
        for(i = 0; i < str.size(); i++){
            kq *= 10;
            kq = (kq%m + (str[i]-'0')%m) % m;
        }
        cout << kq << endl;
    }
}
