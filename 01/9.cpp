#include <bits/stdc++.h>
int check(int n){
    int i,c=0,l=0;
    while(n>0){
        i=n%10;
        if(i%2==0) c++;
        else l++;
        n/=10;
    }
    if(c!=l) return 0;
    return 1;
}
using namespace std;
int main(){
    int n,n1=1,n2=10,d=0;
    cin >> n;
    for(int i=1; i<n; i++){
        n1*=10; n2*=10;
    }
    for(int i=n1; i<n2; i++){
        if(check(i)){
            cout << i << " ";
            d++;
            if(d%10==0) cout << endl;
        }
    }
    return 0;
}

