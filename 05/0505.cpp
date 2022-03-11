#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten, gt, ns, dchi, sothue, ngayky;
};
void nhap(NhanVien &a){
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dchi);
    cin >> a.sothue >> a.ngayky;
}
void in(NhanVien a){
    cout << "00001 " << a.ten << " " << a.gt << " " << a.ns << " ";
    cout << a.dchi << " " << a.sothue << " " << a.ngayky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
