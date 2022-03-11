#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char num[1001];
        int kt[500] = {0}, check = -1;
        cin >> num;
        if(num[0] == '0') cout << "INVALID\n";
        else {
            for(int i=0; i<strlen(num); i++) {
                if(isdigit(num[i])) {
                    kt[num[i]]++;
                }
                else {
                    cout << "INVALID\n";
                    check = 1;
                    break;
                }
            }
            if(check != 1){
                int count = 0;
                for(int i='0'; i<='9'; i++){
                    if(kt[i]) count ++;
                }
                if(count == 10) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}

