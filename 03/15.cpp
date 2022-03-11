#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        string num;
        cin >> num;
        int l = num.size(), max = 0, vt1 = -1, vt2;
        for(int i = l-2; i >= 0; i--) {
            for(int j = i+1; j < l; j++) {
                if(num[i] > num[j] && max < num[j]) {
                    vt1 = i; vt2 = j; max = num[j];
                }
            }
            if(vt1 != -1) {
                swap(num[vt1], num[vt2]);
                cout << num << endl;
                break;
            }
        }
        if(vt1 == -1) cout << "-1\n";
    }
    return 0;
}

