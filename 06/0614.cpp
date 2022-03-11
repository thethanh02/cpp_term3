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
    friend istream &operator >> (istream &is, NhanVien &a){
        scanf("\n");
        getline(is, a.ten);
        is >> a.gt >> a.ns;
        scanf("\n");
        getline(is, a.dchi);
        is >> a.sothue >> a.ngayky;
        a.id = x++;
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
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
