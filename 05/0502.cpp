#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten, ns; float m1, m2, m3, sum;
};
void nhap(ThiSinh &a){
    getline(cin, a.ten);
    getline(cin, a.ns);
    cin >> a.m1 >> a.m2 >> a.m3;
    a.sum = a.m1 + a.m2 + a.m3;
}
void in(ThiSinh a){
    cout << a.ten << " " << a.ns << " ";
    cout << fixed << setprecision(1) << a.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
