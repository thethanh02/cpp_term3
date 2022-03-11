#include <bits/stdc++.h>
using namespace std;
int tong(int n){
    int sum=10;
    while(sum>9){
        sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        n = sum;
    }
    return sum;
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << tong(n) << endl;
    }
    return 0;
}
