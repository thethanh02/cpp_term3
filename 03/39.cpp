#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int count, l;
        cin >> s;
        l = count = s.length();
        for(int i=0; i<l-1; i++){
            for(int j=i+1; j<l; j++){
                if(s[j] == s[i]) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
