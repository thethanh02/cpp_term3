#include<bits/stdc++.h>
using namespace std;
#define a() a;
string chuanhoa(char s[]){
    string ten = "";
    char *p = strtok(s, " ");
    while(p != NULL){
        p[0] = toupper(p[0]);
        for(int i = 1; i < strlen(p); i++) p[i] = tolower(p[i]);
        ten += p;
        ten += " ";
        p = strtok(NULL, " ");
    }
    return ten;
}
class SinhVien{
    string ten, lop, ns; 
    char name[101]; float gpa;
public:
    SinhVien(){
        this->ten = "";
        this->lop = "";
        this->ns = "";
        this->gpa = 0;
    }
    friend istream &operator >> (istream &is, SinhVien &a){
        is.getline(a.name, 100);
        is >> a.lop >> a.ns >> a.gpa;
        if(a.ns[1] == '/') a.ns.insert(0, "0");
        if(a.ns[4] == '/') a.ns.insert(3, "0");
        a.ten = chuanhoa(a.name);
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
