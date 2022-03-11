#include<bits/stdc++.h>
using namespace std;
#define a() a;
class NhanVien{
    string ten, gt, ns, dchi, sothue, ngayky;
public:
    NhanVien(){
        this->ten = "";
        this->gt = "";
        this->ns = "";
        this->dchi = "";
        this->sothue = "";
        this->ngayky = "";
    }
    friend istream &operator >> (istream &is, NhanVien &a){
        getline(is, a.ten);
        is >> a.gt >> a.ns;
        is.ignore();
        getline(is, a.dchi);
        is >> a.sothue >> a.ngayky;
        return is;
    }
    friend ostream &operator << (ostream &os, const NhanVien &a){
        os << "00001 " 
             << a.ten << " " 
             << a.gt << " " 
             << a.ns << " "
             << a.dchi << " " 
             << a.sothue << " " 
             << a.ngayky;
        return os;
    }
};
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
