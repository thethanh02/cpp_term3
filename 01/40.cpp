#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,ok=0;
		int a[]={2,3,5,7,13,17,19,31};
		cin>>n;
		for(int i=0;i<8;i++){
			if(n==pow(2,a[i]-1)*(pow(2,a[i])-1)){
				ok=1;
				break;
			}
		}
		if(ok==1) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
