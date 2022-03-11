#include<bits/stdc++.h>
using namespace std;
string s;
int MOD(int k){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        int num = 0;
        for(int j = i; j < s.size(); j++){
            num *= 10;
            num += (s[j]-'0');
            num %= k;
            if(num == 0) cnt++; 
        }
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        cout << MOD(8)-MOD(24) << endl; 
    }
    return 0;
}