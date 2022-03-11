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
    string getgroup(){
        return lop.substr(1, 2);
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
int main(){
    SinhVien ds[1010];
    string list[100];
    int n, i, q, j;
    cin >> n;
    for(i = 0; i < n; i++) cin >> ds[i];
    cin >> q;
    for(i = 0; i < q; i++) cin >> list[i];
    for(i = 0; i < q; i++){
        cout << "DANH SACH SINH VIEN KHOA " << list[i] << ":\n";
        string gr = list[i].substr(2, 2);
        for(j = 0; j < n; j++)
            if(gr == ds[j].getgroup()) cout << ds[j];
    }
    return 0;
}