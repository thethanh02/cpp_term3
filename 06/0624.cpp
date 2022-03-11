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
        return msv.substr(3, 4);
    }
    char get1letter(){
        return lop[0];
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

int tim(string s){
    if(s == "KE TOAN") return 0;
    if(s == "CONG NGHE THONG TIN") return 1;
    if(s == "AN TOAN THONG TIN") return 2;
    if(s == "VIEN THONG") return 3;
    if(s == "DIEN TU") return 4;
}
string nganh[5] = {"DCKT", "DCCN", "DCAT", "DCVT", "DCDT"};
int main(){
    SinhVien ds[1010];
    string list[100];
    int n, i, q, j;
    cin >> n;
    for(i = 0; i < n; i++) cin >> ds[i];
    cin >> q;
    scanf("\n");
    for(i = 0; i < q; i++){
        getline(cin, list[i]);
        transform(list[i].begin(), list[i].end(), list[i].begin(), ::toupper);
        //for(int j = 0; j < list[i].size(); j++) list[i][j] = toupper(list[i][j]);
    }
    for(i = 0; i < q; i++){
        cout << "DANH SACH SINH VIEN NGANH " << list    [i] << ":\n";
        string gr = list[i].substr(2, 2);
        for(j = 0; j < n; j++){
            if(ds[j].getgroup() == nganh[tim(list[i])]){
                if(ds[j].getgroup() == "DCCN" || ds[j].getgroup() == "DCAT"){
                    if(ds[j].get1letter() != 'E') cout << ds[j];
                }
                else cout << ds[j];
            }
        }
    }
    return 0;
}