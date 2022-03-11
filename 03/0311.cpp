#include <bits/stdc++.h>
struct tu{
    char nd; int dem;
};
int tim(char s, tu ds[], int n){
    for(int i = 0; i < n; i++) if(s == ds[i].nd) return i;
    return -1;
}
using namespace std;
int main(){
    int time;
    cin >> time;
    while(time--){
        char s[1001]; int n = 0;
        struct tu ds[1000];
        cin >> s;
        int l = strlen(s), m = 0;
        for(int i = 0; i < l; i++){
            int t = tim(s[i], ds, n);
            if(t == -1){
                ds[n].nd = s[i];
                ds[n].dem = 1;
                n++;
            }
            else{
                ds[t].dem++;
                m = max(m, ds[t].dem);
            }
        }
        int check = l - l/2;
        if(m > check) cout << "0\n";
        else cout << "1\n";
    }
    return 0;
}
