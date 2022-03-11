#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n], res[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            res[i] = a[i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++)
                if(a[i] > a[j]) res[i] = max(res[i], res[j]+a[i]);
        }
        cout << *max_element(res, res+n) << endl;
    }
}
