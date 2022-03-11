#include <bits/stdc++.h>
using namespace std;
string str[10]={"ABCabc","DEFdef","GHIghi","JKLjkl","MNOmno","PQRSpqrs","TUVtuv","WXYZwxyz"};
int thuannghich(char s[]){
    int i, l = strlen(s);
    for(i=0; i<=l/2; i++)
        if(s[i] != s[l-i-1]) return 0;
    return 1;
}
main(){
    int t; char s[1000];
    cin >> t;
    while(t--){
        cin >> s;
        for(int i=0; i<strlen(s); i++)
            for(int j=0; j<8; j++)
                if(str[j].find(s[i]) != -1){
                    s[i] = j + 2 + '0';
                    break;
                }
        if(thuannghich(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
