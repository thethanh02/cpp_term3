#include <bits/stdc++.h>
using namespace std;
int t; string email[1000];
void chuthuong(char s[]) {
    for(int i=0; i<strlen(s); i++)
        s[i] = tolower(s[i]);
}
void xuly(char s[], int i) {
    string name[1000]; int count = 0;
    char *p = strtok(s, " ");
    while(p != NULL){
        name[count] = p;
        count++;
        p = strtok(NULL, " ");
    }
    count--;
    for(int i=0; i<count; i++) name[count].push_back(name[i][0]);
    email[i] = name[count];
}
void print() {
    int i, j, d;
    for(i=0; i<t; i++) {
        cout << email[i];
        d = 0;
        for(j=0; j<=i; j++)
            if(email[i] == email[j]) d++;
        if(d > 1) cout << d;
        cout << "@ptit.edu.vn\n";
    }
}
int main(){
    cin >> t; cin.ignore();
    for(int i=0; i<t; i++) {
        char s[101];
        fgets(s, 101, stdin);
        s[strlen(s)-1] = '\0';
        chuthuong(s);
        xuly(s, i);
    }
    print();
    return 0;
}
