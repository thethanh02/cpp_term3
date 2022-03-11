#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1], count = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        if(n == 1) cout << "0\n";
        else{
            for(int i = 1; i < a[n-1]; i++){
                int k = a[0]%i, check = 0;
                for(int j = 1; j < n; j++){
                    if(a[j]%i == k) check++;
                    else break;
                }
                if(check == n-1) count++;
            }
            cout << count << endl;
        }
    }
}
