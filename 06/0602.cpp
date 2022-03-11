#include<bits/stdc++.h>
using namespace std;
#define a() a;
class SinhVien{
    string ten, lop, ns; 
    float gpa;
public:
    SinhVien(){
        this->ten = "";
        this->lop = "";
        this->ns = "";
        this->gpa = 0;
    }
    friend istream &operator >> (istream &is, SinhVien &a){
        getline(is, a.ten);
        is >> a.lop >> a.ns >> a.gpa;
        if(a.ns[1] == '/') a.ns.insert(0, "0");
        if(a.ns[4] == '/') a.ns.insert(3, "0");
        return is;
    }
    friend ostream &operator << (ostream &os, const SinhVien &a){
        os  << "B20DCCN001 "
            << a.ten << " "
            << a.lop << " "
            << a.ns << " ";
        os << fixed << setprecision(2) << a.gpa;
        return os;
    }
};
int main()  {
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
