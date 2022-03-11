#include <bits/stdc++.h>
using namespace std;
int minstep(int a[], int n){
    int ans = 0;
    for(int i = 0,j = n-1; i <= j;){
        if (a[i] == a[j]){
            i++; j--;
        }
        else if (a[i] > a[j]){
            j--; ans++;
            a[j] += a[j+1] ;
        }
        else{
            i++; ans++;
            a[i] += a[i-1];
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x:a) cin >> x;
        cout << minstep(a, n) << endl;
    }
    return 0;
}
