#include<bits/stdc++.h>
using namespace std;
int findcoup(vector<int> &v, int x){
    int n = v.size();
    for(int i = 0; i < n; i++){
        int k = x + v[i];
        if(binary_search(v.begin(), v.end(), k)) return 1;;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cout << findcoup(v,x) << endl;
    }
}
