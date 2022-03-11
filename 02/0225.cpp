#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n], m = 0;
        int d = 0, s[n] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                s[d] += a[i][j];
            }
            m = max(m, s[d]);
            d++;
        }
        for(int i = 0; i < n; i++){
            int tmp = 0;
            for(int j = 0; j < n; j++)
                tmp += a[j][i];

            m = max(m, tmp);
        }
        int count = 0;
        for(int i = 0; i < n; i++)
            count += (m - s[i]);

        cout << count << endl;
    }
}

