#include <bits/stdc++.h>
using namespace std;
#define nguyenam "AEIOUYaeiouy"
int main(){
    char s[105];
    cin >> s;
    char *p = strtok(s, nguyenam);
    while(p!=NULL){
        for(int i=0; i<strlen(p); i++){
            p[i] = tolower(p[i]);
            cout << "." << p[i];
        }
        p = strtok(NULL, nguyenam);
    }
    return 0;
}
