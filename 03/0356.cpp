#include <bits/stdc++.h>
using namespace std;

int tim(char s[], string str[], int n){
    for(int i=0; i<n; i++) if(s == str[i]) return i;
    return -1;
}
int main(){
    string str[10000]; int n = 0;
    int time;
    cin >> time; cin.ignore();
    while (time--){
        char s[50];
        cin.getline(s, 50);
        int t = tim(s, str, n);
        if(t == -1) str[n++] = s;
    }
    cout << n;
}
