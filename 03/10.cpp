#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        char x1[20], x2[20];
        cin >> x1 >> x2;
        for(int i=0; i<strlen(x1); i++){
            if(x1[i] == '5') x1[i] = '6';
        }
        ll x1_6 = atol(x1);
        for(int i=0; i<strlen(x1); i++){
            if(x1[i] == '6') x1[i] = '5';
        }
        ll x1_5 = atol(x1);
        for(int i=0; i<strlen(x2); i++){
            if(x2[i] == '5') x2[i] = '6';
        }
        ll x2_6 = atol(x2);
        for(int i=0; i<strlen(x2); i++){
            if(x2[i] == '6') x2[i] = '5';
        }
        ll x2_5 = atol(x2);
        cout << x1_5 + x2_5 << " " << x1_6 + x2_6 << endl;
    }
    return 0;
}

