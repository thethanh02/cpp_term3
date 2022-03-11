#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int k, count = 0;
        cin >> s >> k;
        int check[1000] = {0};
        for(int i=0; i<s.size(); i++) check[s[i]] = 1;
        for(int i='a'; i<='z'; i++) if(!check[i]) count++;
        if(k >= count) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
