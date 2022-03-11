#include <bits/stdc++.h>
using namespace std;
void dao(char s[]){
    char s1[1005];
    int i, j = 0, l = strlen(s);
    for(i = l-1; i >= 0; i--) s1[j++] = s[i];
    s1[l] = '\0';
    strcpy(s,s1);
}
void sub(char a[], char b[]){
    int i, la = strlen(a), lb = strlen(b);
    dao(a); dao(b);
    for(i = 0; i < la-lb; i++) strcat(b,"0");
    int nho=10; char hieu[1005];
    for(i = 0; i < la; i++){
        int h = nho + a[i] - b[i];
        if(h >= 10) nho = 10;
        else nho = 9;
        h %= 10;
        hieu[i] = '0' + h;
    }
    hieu[la] = '\0';
    dao(hieu);
    cout << hieu << endl;
}
main(){
    int t;
    cin >> t;
    while(t--){
        char a[1005],b[1005];
        cin >> a >> b;
        if(strlen(a) > strlen(b)) sub(a,b);
        else if(strlen(a) < strlen(b)) sub(b,a);
        else{
            for(int i = 0; i < strlen(a); i++){
                if(a[i] > b[i]){
                    sub(a,b); break;
                }
                if(a[i] < b[i]){
                    sub(b,a); break;
                }
            }
        }
    }
}
