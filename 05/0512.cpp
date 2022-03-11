#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
    ll tu, mau;
};
ll gcd(ll a, ll b){
    while(a != 0){
        ll t = a; a = b%a; b = t;
    }
    return b;
}
void rutgon(PhanSo &A){
    ll tmp = gcd(A.tu, A.mau);
    A.tu /= tmp; A.mau /= tmp;
}
void process(PhanSo &A, PhanSo &B){
    PhanSo C, D;
    C.tu = A.tu*B.mau + B.tu*A.mau;
    C.tu *= C.tu;
    C.mau = A.mau*B.mau;
    C.mau *= C.mau;
    rutgon(C);
    D.tu = A.tu*B.tu*C.tu;
    D.mau = A.mau*B.mau*C.mau;
    rutgon(D);
    cout << C.tu << "/" << C.mau << " "
         << D.tu << "/" << D.mau << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
