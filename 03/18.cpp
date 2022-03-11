#include <bits/stdc++.h>
using namespace std;
int last5digits(char a[]){
    int th1 = 0, th2 = 0;
    for(int i=0; i<5; i++){
        if(a[i-1] < a[i]) th1++;
        if(a[i] == '6' || a[i] == '8') th2++;
    }
    if(th1 == 5) return 1;
    if(th2 == 5) return 1;
    if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return 1;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        char bienso[100], num[6]; int d = 0;
        cin >> bienso;
        for(int i=5; i<strlen(bienso); i++) {
            if(i != 8) num[d++] = bienso[i];
        }
        cout << endl;
        if(last5digits(num)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

