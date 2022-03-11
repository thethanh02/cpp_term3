#include <bits/stdc++.h>
using namespace std;
int thuannghichchan(string s){
    int l = s.length();
    for(int i=0; i<l/2; i++){
        if(s[i]%2 != 0) return 0;
        if(s[i] != s[l-1-i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string num;
        cin >> num;
        if(thuannghichchan(num)) cout << "YES\n";
        else cout << "NO\n";
    }
}
