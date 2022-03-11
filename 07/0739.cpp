#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        s.push_back('I');
        int n = 1, l = s.size(), a[l+1], vtt = 0;
        for(int i = 0; i < l; i++){
            if(s[i] == 'I'){
                for(int j = i; j >= vtt; j--) a[j] = n++;
                vtt = i + 1;
            }
        }
        a[l] = n++;
        for(int i = 0; i < l; i++) cout << a[i];
        cout << endl;
    }
    return 0;
}
