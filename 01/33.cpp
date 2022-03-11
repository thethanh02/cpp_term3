#include <bits/stdc++.h>
using namespace std;
int main(){
    int N = 10000;
    bool check[N+1];
    for (int i=2; i<=N; i++) check[i] = true;
    for (int i=2; i<=N; i++)
        if (check[i] == true)
            for (int j=2*i; j<=N; j+=i) check[j] = false;

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            if(check[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
