#include <bits/stdc++.h>
using namespace std;
char alpha[] = "qwertyuiopasdfghjkllzxcvbnm";
int main(){
    int t;
    cin >> t;
    while(t--) {
        char s[100001]; int ans = 0;
        cin >> s;
        char *p = strtok(s, alpha);
        while(p != NULL) {
            ans += atoi(p);
            p = strtok(NULL, alpha);
        }
        cout << ans << endl;
    }
    return 0;
}

