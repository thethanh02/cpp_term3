#include <bits/stdc++.h>
using namespace std;
int tim(int n, char s, char ds[]) {
    for(int i=0; i<n; i++)
        if(s == ds[i]) return 1;
    return -1;
}
int main() {
    int time;
    cin >> time;
    while(time--) {
        char s[1000], ds[1000];
        int k, count = 0;
        cin >> s >> k;
        int l = strlen(s);
        for(int i=0; i<=l-k; i++) {
            int n = 0;
            ds[n++] = s[i];
            if(n == k) count ++;
            for(int j=i+1; j<l; j++) {
                int t = tim(n, s[j], ds);
                if(t == -1) ds[n++] = s[j];
                if(n == k) count ++;
                if(n > k) break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
