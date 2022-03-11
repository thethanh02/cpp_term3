#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    vector<int> v;
    while(t--) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        if(v[i] != v[i-1]) cout << v[i] << " ";
    cout << endl;
    return 0;
}
