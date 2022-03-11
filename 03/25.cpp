#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        char num[1010]; int sum = 0;
        cin >> num;
        for(int i=0; i<strlen(num); i++) {
            if(i%2 == 0) sum = sum + num[i] - '0';
            else sum = sum - num[i] + '0';
        }
        if(sum%11 == 0) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
