#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; cin.ignore();
    while(t--) {
        int n = 0;
        char s[1001], ds[1001][1001];
        fgets(s, 1001, stdin);
        char *p = strtok(s, " \n");
        while(p != NULL) {
            strcpy(ds[n++], p);
            p = strtok(NULL, " \n");
        }
        for(int i=n-1; i>=0; i--) cout << ds[i] << " ";
        cout << endl;
    }
    return 0;
}
