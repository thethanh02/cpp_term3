#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
                s.erase(i, 3);
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}
