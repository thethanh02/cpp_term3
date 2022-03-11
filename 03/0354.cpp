#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char s[1005]; int tmp=1;
        cin >> s;
        for(int i=0; i<strlen(s); i++){
            if(s[i]==s[i+1]) tmp++;
            else{
                cout << s[i] << tmp;
                tmp = 1;
            }
        }
        cout << endl;
    }
}
