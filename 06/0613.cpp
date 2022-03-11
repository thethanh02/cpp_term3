#include<bits/stdc++.h>
using namespace std;
int x = 0;
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
    string ten, lop, ns; char name[101];
public:
    int id;
    float gpa;
    SinhVien(){
        this->ten = "";
        this->lop = "";
        this->ns = "";
        this->gpa = 0;
    }
    friend istream &operator >> (istream &is, SinhVien &a){
        scanf("\n");
        is.getline(a.name, 100);
        is >> a.lop >> a.ns >> a.gpa;
        if(a.ns[1] == '/') a.ns.insert(0, "0");
        if(a.ns[4] == '/') a.ns.insert(3, "0");
        a.ten = chuanhoa(a.name);
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
class SVcompare{
    public:
        bool operator()(SinhVien a, SinhVien b){
            if(a.gpa > b.gpa) return true;
            return false;
        }
};
bool cmp1(SinhVien a, SinhVien b){
    SVcompare cmp;
    return cmp(a, b);
}
void sapxep(SinhVien ds[50], int N){
    sort(ds, ds+N, cmp1);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}