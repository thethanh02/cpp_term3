#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &x:v) cin >> x;
        int m = 0;
        for(int i = 0; i < n; i++){
            for(int j = n-1; j > i; j--){
                if(v[i] < v[j]){
                    m = max(m, j-i);
                    break;
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}