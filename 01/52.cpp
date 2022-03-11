#include <bits/stdc++.h>
using namespace std;
int tim(int a,int m){
    for(int i=0; i<m; i++)
        if((i*a)%m==1) return i;
    return -1;
}
int main(){
    int t,a,m;
    cin >> t;
    while(t--){
        cin >> a >> m;
        cout << tim(a,m) << endl;
    }
}
