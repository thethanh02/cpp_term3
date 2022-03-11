#include<bits/stdc++.h>
using namespace std;
#define a() a;
class SinhVien{
    string ten, lop, ns; float gpa;
public:
    SinhVien(){
        this->ten = "";
        this->lop = "";
        this->ns = "";
        this->gpa = 0;
    }
    void inp(){
        getline(cin, ten);
        cin >> lop >> ns >> gpa;
        if(ns[1] == '/') ns.insert(0, "0");
        if(ns[4] == '/') ns.insert(3, "0");
    }
    void outp(){
        cout << "B20DCCN001 "
             << "Nguyen Van A "
             << lop << " "
             << ns << " ";
        cout << fixed << setprecision(2) << gpa;
    }
};
void nhap(SinhVien &a){
    a.inp();
}
void in(SinhVien &a){
    a.outp();
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
/*
Nguyen Hoa Binh
D20CQCN04-B
2/2/2002
2
*/