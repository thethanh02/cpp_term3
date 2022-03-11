#include <bits/stdc++.h>
using namespace std;
struct data{
    string pw; int lap;
};
bool cmp(string &a, string &b){
    return a.size() < b.size();
}
int main(){
    int n, i, j = 0, d = 0, res = 0;
    cin >> n;
    string s[n];
    for (i = 0; i < n; i++) cin >> s[i];
    sort(s, s + n, cmp);
    struct data ds[n];
    while(j < n){
        i = j + 1;
        ds[d].pw = s[j];
        ds[d].lap = 1;
        while(ds[j].pw == ds[i].pw){
            ds[d].lap++;
            i++;
            if(i == n) break;
        }
        j = i; d++;
    }
    for(i = 0; i < d; i++) res += ds[i].lap*(ds[i].lap-1);
    for(i = 0; i < d-1; i++){
        for(int x = i+1; x < d; x++){
            if(ds[x].pw.find(ds[i].pw) != -1) res += ds[i].lap*ds[x].lap;
            if(ds[i].pw.find(ds[x].pw) != -1) res += ds[i].lap*ds[x].lap;
        }
    }
    cout << res;
}
