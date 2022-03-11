#include<bits/stdc++.h>
using namespace std;
void in( vector<int> v, int n ){
    for(int i=0; i<n; i++) cout << v[i];
    cout << " ";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(20, 0);
        int m = pow(2,n), d = 0;
        while(d < m){
            in(v, n);
            for(int i=n-1; i>=0; i--){
                if(v[i] == 0){
                    v[i] = 1;
                    for(int j=n-1; j>i; j--) v[j] = 0;
                    break;
                }
            }
            d++;
        }
        cout << endl;
    }
}
