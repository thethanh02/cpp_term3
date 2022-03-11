#include <bits/stdc++.h>
using namespace std;
int somayman(string s) {
    while(s.size() != 1) {
        int sum = 0;
        for(int i=0; i<s.size(); i++) {
            sum = sum + s[i] - '0';
        }
        s = to_string(sum);
    }
    if(s == "9") return 1;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << somayman(s) << endl;
    }
    return 0;
}
