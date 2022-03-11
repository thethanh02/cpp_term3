#include <bits/stdc++.h>
using namespace std;
char alpha[] = "qwertyuiopasdfghjkllzxcvbnm";
int main(){
    int t;
    cin >> t;
    while(t--) {
        char s[100001]; int max = 0;
        cin >> s;
        char *p = strtok(s, alpha);
        while(p != NULL) {
            int ans = atoi(p);
            if(max < ans) max = ans;
            p = strtok(NULL, alpha);
        }
        cout << max << endl;
    }
    return 0;
}

