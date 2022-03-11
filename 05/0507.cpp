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
	a.tu /= x;
	a.mau /= x;
}
PhanSo tong(PhanSo a, PhanSo b){
    PhanSo res;
    res.mau = a.mau * b.mau;
    res.tu = a.tu*b.mau + b.tu*a.mau;
    rutgon(res);
    return res;
}
void in(PhanSo res){
   cout << res.tu << "/" << res.mau;
}
int main() {
	struct PhanSo p, q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
