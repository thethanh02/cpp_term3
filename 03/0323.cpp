#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        long long m, res = 0;
        cin >> s >> m;
        for(int i = 0; i < s.size(); i++){
            res *= 10;
            res = (res%m + (s[i]-'0')%m) % m;
        }
        cout << res << endl;
    }
}
