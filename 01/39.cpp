#include <bits/stdc++.h>
using namespace std;

const int oo = 100000;
int check[oo];
void eratos(){
    check[0]=check[1]=0;
    for(int i=2; i<oo; i++) check[i]=1;
    for(int i=2; i<=sqrt(oo); i++)
        if(check[i])
            for(int j=i*i; j<=oo; j+=i) check[j]=0;
}
int s_digits(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    eratos();
    int t;
    cin >> t;
    while (t--){
        int n,sum = 0,sn;
        cin >> n;
        if(check[n]) cout << "NO\n";
        else{
            sn = s_digits(n);
            for(int i=2; i<=n; i++){
                while(n%i==0){
                    sum += s_digits(i); n /= i;
                }
            }
            if(sn==sum) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
