#include <bits/stdc++.h>
using namespace std;
void xuly(string s){
    int d[50] = {0};
    int l = s.length();
    for(int i=0; i<l; i++){
        d[s[i] - 'A']++;
    }
    for(int i=0; i<l; i++){
        if(d[s[i] - 'A'] == 1) cout << s[i];
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        xuly(s);
    }
    return 0;
}
