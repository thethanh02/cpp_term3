#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x = 0, m = -1;
        cin >> n;
        while(n--){
            if(m < x) m = x;
            cin >> x;
        }
        cout << m << endl;
    }
}
