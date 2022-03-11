#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        char s[100001]; int ans = 0;
        cin >> s;
        sort(s, s+strlen(s));
        for(int i = 0; i < strlen(s); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') cout << s[i];
            if(s[i] >= '0' && s[i] <= '9') ans += (s[i] - '0');
        }
        cout << ans << endl;
    }
    return 0;
}

