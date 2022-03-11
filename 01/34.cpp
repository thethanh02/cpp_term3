#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,d = 1; vector <int> a(100000,-1);
        cin >> n >> k;
        while (n%2 == 0){
            a[d++] = 2; n >>= 1;
        }
        for(int i=3; i<=sqrt(n); i+=2)
            while (n%i == 0) {
                a[d++] = i; n /= i;
            }

        if (n > 2) a[d++] = n;
        cout << a[k] << endl;
    }
    return 0;
}
