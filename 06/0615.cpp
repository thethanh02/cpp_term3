#include<bits/stdc++.h>
using namespace std;
int x = 0;
class NhanVien{
    string ten, gt, ns, dchi, sothue, ngayky;
public:
    int id;
    NhanVien(){
        this->ten = "";
        this->gt = "";
        this->ns = "";
        this->dchi = "";
        this->sothue = "";
        this->ngayky = "";
    }
    string thang(){
        return ns.substr(0,2);
    }
    string ngay(){
        return ns.substr(3,2);
    }
    string nam(){
        return ns.substr(6,4);
    }
    friend istream &operator >> (istream &is, NhanVien &a){
        scanf("\n");
        getline(is, a.ten);
        is >> a.gt >> a.ns;
        scanf("\n");
        getline(is, a.dchi);
        is >> a.sothue >> a.ngayky;
        a.id = x++;
        // a.thang = a.ns.substr(0,2);
        // a.ngay = a.ns.substr(3,2);
        // a.nam = a.ns.substr(6,4);
        return is;
    }
    friend ostream &operator << (ostream &os, const NhanVien &a){
        os  << "000";
        if(a.id+1 < 10) os << "0";
        os  << a.id+1 << " "
            << a.ten << " " 
            << a.gt << " " 
            << a.ns << " "
            << a.dchi << " " 
            << a.sothue << " " 
            << a.ngayky << endl;
        return os;
    }
};
int cmp(NhanVien a, NhanVien b){
    if(a.nam() < b.nam()) return 1;
    if(a.nam() == b.nam()){
        if(a.thang() < b.thang()) return 1;
        if(a.thang() == b.thang()){
            if(a.ngay() < b.ngay()) return 1;
        }
    }
    return 0;
}
void sapxep(NhanVien ds[50], int n){
    sort(ds, ds+n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}