#include <bits/stdc++.h>
using namespace std;
int main(){
    int N = 1000000;
    bool check[N+1];
    for (int i=2; i<=N; i++) check[i] = true;
    for (int i=2; i<=N; i++)
        if (check[i] == true)
            for (int j=2*i; j<=N; j+=i) check[j] = false;

    int n,m;
    cin >> n >> m;
    if(n>m) swap(n,m);
    for(int i=n; i<=m; i++){
        if(check[i]) cout << i << " ";
    }
    cout << endl;
    return 0;
}
