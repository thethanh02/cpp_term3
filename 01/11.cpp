#include <bits/stdc++.h>
using namespace std;
int kt(string s){
    for(int i=0; i<s.length()-1; i++){
        int a = abs(s[i+1] - s[i]);
        if(a != 1) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(kt(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
