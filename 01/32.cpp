#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m=2;
        cin >> n;
        for(int i=2; i<=sqrt(n); i++)
            while(n%i == 0){
				m = i; n /= i;
			}
		if(n>m) m = n;
		cout << m << endl;
    }
    return 0;
}
