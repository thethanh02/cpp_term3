#include<bits/stdc++.h>
using namespace std;

int minStep(int n, int a[]) {
    int cur = n - 1, ans = 0, c = 0;
    while(1) {
        c = 0;
        for(int j = 0; j < cur; j++) {
            if(a[j] >= (cur - j)) {
                cur = j;
                ans++; c++;
                break;
            }
        }
        if(c == 0) return -1;
        if(cur == 0) return ans;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n; 
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << minStep(n, a) << endl;
    }
    return 0;
}