#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	ll tu, mau;
};
ll gcd(ll a,ll b){
	while(a!=0){
		ll t = a; a = b%a; b = t;
	}
	return b;
}
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
void rutgon(PhanSo &a){
	ll x = gcd(a.tu, a.mau);
	a.tu = a.tu / x;
	a.mau = a.mau / x;
}
void in(PhanSo a){
   cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
