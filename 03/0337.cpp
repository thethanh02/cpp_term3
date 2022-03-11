#include<bits/stdc++.h>
using namespace std;
int check(string a, string b) {
    for (int i = 0; i < b.size(); i++) {
        int x = a.find(b[i]);
        if (x !=  -1) a.erase(a.begin() + x);
        else return 0;
    }
    return 1;
}

int tim(int n, char s, string b){
    for(int i = 0; i < n; i++) if(b[i] == s) return i;
    return -1;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a;
        int n = 0;
        for(int i = 0; i < a.size(); i++) {
            int x = tim(n, a[i], b);
            if(x == -1) {
                b.push_back(a[i]);
                n++;
            }
        }
        int kt = 1;
        for (int i = b.size(); i <= a.size(); i++) {
            if (kt == 0) break;
            for (int j = 0; j <= a.size() - i; j++) {
                string tmp = a.substr(j, i);
                if (check(tmp, b)) {
                    kt = 0;
                    cout << tmp.size() << endl; break;
                }
            }
        }
        if (kt) cout << "-1" << endl;
    }
    return 0;
}