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
    string getmsv(){
        return msv;
    }
    void operator = (const SinhVien &a){
        msv = a.msv; ten = a.ten; lop = a.lop; email = a.email;
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
    if(a.getmsv() < b.getmsv()) return 1;
    return 0;
}
int main(){
    SinhVien ds[1010], tmp;
    int n = 0, i;
    while(cin >> tmp){
        ds[n++] = tmp;
    }
    sort(ds, ds+n, cmp);
    for(i = 0; i < n; i++) cout << ds[i];
    return 0;
}