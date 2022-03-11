#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            int vt = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            if(vt < b.size()) {
                cout << b[vt] << " ";
                //b.erase(b.begin()+vt);
            }
            else cout << "_ ";
        }
        cout << endl;
    }
    return 0;
}