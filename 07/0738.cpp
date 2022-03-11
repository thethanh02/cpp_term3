#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int dem = 0, m = 0;
        for(int i = 0; i < n; i++){
            int tmp = 0, x = a[i];
            while(x>0){
                if(x%2 == 0){
                    x /= 2; tmp++;
                }
                else{
                    x -= 1; dem++;
                }
            }
            m = max(m, tmp);
        }
        cout << m + dem << endl;
    }
    return 0;
}
