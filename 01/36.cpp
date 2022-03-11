#include <bits/stdc++.h>
using namespace std;

const int oo = 1000000;
int check[oo];
int prime[oo], x=0;
void eratos(){
    check[0]=check[1]=0;
    for(int i=2; i<oo; i++) check[i]=1;
    for(int i=2; i<=sqrt(oo); i++)
        if(check[i])
            for(int j=i*i; j<=oo; j+=i) check[j]=0;

    for(int i=2; i<=oo; i++) if(check[i]) prime[x++]=i;
}
int main(){
    eratos();
    int t;
    cin >> t;
    while(t--){
        long long n,d=0;
        cin >> n;
        n = sqrt(n);
        for(int i=0; i<x; i++){
            if(prime[i]<=n) d++;
            else break;
        }
        cout << d << endl;
    }
}
