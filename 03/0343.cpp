#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char check;
        int count, c, l, n;
            count = c = l = 0;
        do{
            cin >> n;
            count ++;
            if(n%2 == 0) c++;
            else l++;
            check = cin.get();
        }while(check != '\n');
        if(count%2 == 0){
            if(c > l) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            if(l > c) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
