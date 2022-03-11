#include <bits/stdc++.h>
using namespace std;
void sapxep(char ds1[][210], int d1) {
    char tmp[210];
    for(int i=0; i<d1-1; i++) {
        for(int j=i+1; j<d1; j++) {
            if(strcmp(ds1[i], ds1[j]) > 0) {
                strcpy(tmp, ds1[i]);
                strcpy(ds1[i], ds1[j]);
                strcpy(ds1[j], tmp);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        char s1[210], s2[210], ds1[210][210], ds2[210][210];
        int d1 = 0, d2 = 0;
        fgets(s1, 210, stdin);
        fgets(s2, 210, stdin);
        s1[strlen(s1) - 1] = '\0'; s2[strlen(s2) - 1] = '\0';
        // tach 2 xau
        char *p = strtok(s1, " ");
        while(p != NULL) {
            strcpy(ds1[d1++], p);
            p = strtok(NULL, " ");
        }
        p = strtok(s2, " ");
        while(p != NULL) {
            strcpy(ds2[d2++], p);
            p = strtok(NULL, " ");
        }
        sapxep(ds1, d1);
        int i, j;
        for(i=0; i<d1; i++){
            int kt = 0, kt1 = 0;
            for(j=0; j<d2; j++) {
                if(strcmp(ds1[i], ds2[j]) == 0) kt = 1;
            }
            if(i<d1-1 && strcmp(ds1[i], ds1[i+1]) == 0) kt1 = 1;
            if(kt==0 && kt1==0) cout << ds1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
