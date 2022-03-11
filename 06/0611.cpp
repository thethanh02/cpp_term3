#include<bits/stdc++.h>
using namespace std;
int x = 0;
class SinhVien{
    string ten, lop, ns; 
    float gpa;
public:
    int id;
    SinhVien(){
        this->ten = "";
        this->lop = "";
        this->ns = "";
        this->gpa = 0;
    }
    friend istream &operator >> (istream &is, SinhVien &a){
        scanf("\n");
        getline(is, a.ten);
        is >> a.lop >> a.ns >> a.gpa;
        if(a.ns[1] == '/') a.ns.insert(0, "0");
        if(a.ns[4] == '/') a.ns.insert(3, "0");
        a.id = x++;
        return is;
    }
    friend ostream &operator << (ostream &os, const SinhVien &a){
        os  << "B20DCCN0";
        if(a.id+1 < 10) os << "0";
        os  << a.id + 1 << " "
            << a.ten << " "
            << a.lop << " "
            << a.ns << " ";
        os << fixed << setprecision(2) << a.gpa << endl;
        return os;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}