#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, pos;
    getline(cin, s);
    cin >> pos;
    int vt = s.find(pos);
    s.erase(vt, pos.length());
    cout << s;
}
