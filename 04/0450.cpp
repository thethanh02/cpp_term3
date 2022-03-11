#include<bits/stdc++.h>
using namespace std;
int tim(int x, int ds[], int n){
    for(int i=0; i<n; i++) if(x == ds[i]) return i;
    return -1;
}
int main() {
    int time;
    cin >> time;
    while(time--){
        int n, m = 0;
        cin >> n;
        int a[n], ds[n], check = 1;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            int t = tim(a[i], ds, m);
            if(t == -1) ds[m++] = a[i];
            else{
                cout << a[i] << endl;
                check = -1;
                break;
            }
        }
        if(check == 1) cout << "-1\n";
    }
}
