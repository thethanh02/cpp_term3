#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    string ten, lop, msv, email; 
public:
    SinhVien(){
        this->ten = "";
        this->lop = "";
        this->msv = "";
        this->email = "";
    }
    string getlop(){
        return lop;
    }
    string getmsv(){
        return msv;
    }
    friend istream &operator >> (istream &is, SinhVien &a){
        scanf("\n");
        getline(is, a.msv);
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.email);
        return is;
    }
    friend ostream &operator << (ostream &os, const SinhVien &a){
        os  << a.msv << " "
            << a.ten << " "
            << a.lop << " "
            << a.email << endl;
        return os;
    }
};
int cmp(SinhVien a, SinhVien b){
    if(a.getlop() < b.getlop()) return 1;
    if(a.getlop() == b.getlop()){
        if(a.getmsv() < b.getmsv()) return 1;
    }
    return 0;
}
int main(){
    SinhVien ds[1010];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    sort(ds, ds+N, cmp);
    for(i = 0; i < N; i++) cout << ds[i];
    return 0;
}