#include <bits/stdc++.h>
using namespace std;
struct tu{
    string nd; int dem;
};
struct tu ds[1000]; int n=0;
int thuannghich(string s){
    int l = s.size();
    if(l == 1) return 0;
    for(int i = 0; i < l/2; i++) if(s[i] != s[l-1-i]) return 0;
    return 1;
}
int tim(string s){
    for(int i = 0; i < n; i++)
        if(s == ds[i].nd) return i;
    return -1;
}
int cmp(tu s1, tu s2){
    int l1 = s1.nd.size(), l2 = s2.nd.size();
    if(l1 > l2) return 1;
    else if(l1 == l2){
        if(s1.nd > s2.nd) return 1;
    }
    return 0;
}
int main(){
    string s;
    while(cin >> s){
        if(thuannghich(s)){
            int t = tim(s);
            if(t == -1){
                ds[n].nd = s;
                ds[n].dem = 1;
                n++;
            }
            else ds[t].dem++;
        }
    }
    sort(ds, ds+n, cmp);
    for(int i=0; i<n; i++) cout << ds[i].nd << " " << ds[i].dem << endl;
}
