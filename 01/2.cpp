#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        if(isupper(c)) c = tolower(c);
        else c = toupper(c);
        cout << c << endl;
    }
    return 0;
}
