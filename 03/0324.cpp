#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		long long s=0, b, m;
		cin >> b >> m;
		for(int i = 0; i < a.size(); i++)
			s = (s*10+(a[i]-'0')) % m;

		long long res = 1;
		while(b>0){
			if(b%2 == 1) res = res * s%m;
			s = s * s%m;
			b /= 2;
		}
		cout << res << endl;
	}
}
