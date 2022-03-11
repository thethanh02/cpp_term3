#include <bits/stdc++.h>
using namespace std;
int ntnn(int n){
    int i;
    for(i=3; i<=sqrt(n); i++)
        if(n%i==0) return i;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << "1 ";
        for(int i=2; i<=n; i++){
            if(i%2==0) cout << "2 ";
            else{
                if(ntnn(i)) cout << ntnn(i) << " ";
                else cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
