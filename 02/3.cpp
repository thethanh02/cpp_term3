#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        vector<int> b(1000000, 0);
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x>0) b[x]++;
        }
        for(int i=1; i<=1000000; i++){
            if(b[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
}
