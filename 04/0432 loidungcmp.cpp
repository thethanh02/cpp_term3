#include <bits/stdc++.h>
using namespace std;
int cmp (string a, string b) {
    if ((a+b) > (b+a)) return 1;
    else return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n], ans;
        for (int i = 0; i < n; i++) cin >> s[i];
        sort(s, s+n, cmp);
        for (int i = 0; i < n; i++) cout << s[i];
        cout << endl;
    }
}
