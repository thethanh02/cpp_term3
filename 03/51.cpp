#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        char s[100], ds[100][100]; int n, d = 0;
        cin >> n; cin.ignore();
        fgets(s, 100, stdin);
        s[strlen(s) - 1] = '\0';
        char *p = strtok(s, " ");
        while(p != NULL) {
            p[0] = toupper(p[0]);
            for(int i=1; i<strlen(p); i++) p[i] = tolower(p[i]);
            strcpy(ds[d++], p);
            p = strtok(NULL, " ");
        }
        if(n == 1) {
            cout << ds[d-1] << " ";
            for(int i=0; i<d-1; i++) cout << ds[i] << " ";
            cout << endl;
        }
        if(n == 2) {
            for(int i=1; i<d; i++) cout << ds[i] << " ";
            cout << ds[0] << endl;
        }
    }
    return 0;
}
