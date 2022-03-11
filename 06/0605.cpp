#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    while(a != 0){
        ll t = a; a = b%a; b = t;
    }
    return b;
}
class PhanSo{
private:
    ll tu, mau;
public:
    PhanSo(ll t, ll m){
        tu = t; mau = m;
    }
    void rutgon(){
        ll uc = gcd(tu,mau);
        tu /= uc; mau /= uc;
    }
    friend istream &operator>>(istream &is, PhanSo &p){
        is >> p.tu >> p.mau;
        return is;
    }
    friend ostream &operator<<(ostream &os, const PhanSo &p){
        os << p.tu << "/" << p.mau;
        return os;
    }
};
int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
