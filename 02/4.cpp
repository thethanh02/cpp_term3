#include <bits/stdc++.h>
using namespace std;
const int oo = 100000;
vector<int> check(oo,1);
void mangnt(){
    check[0] = check[1] = 0;
    for (int i=2; i<=sqrt(oo); i++)
        if (check[i])
            for (int j=i*i; j<=oo; j+=i) check[j] = 0;
}
int main(){
    mangnt();
    int t;
    cin >> t;
    while(t--){
        int n, m, count = 0;
        cin >> n >> m;
        for(int i=n; i<=m; i++){
            if(check[i]) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
