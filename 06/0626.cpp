#include<bits/stdc++.h>
using namespace std;
int x = 0;
string get1stletter(char s[]){
    string mon = "";
    char *p = strtok(s, " ");
    while(p != NULL){
        p[0] = toupper(p[0]);
        mon += p[0];
        p = strtok(NULL, " ");
    }
    return mon;
}
class GiangVien{
    char hoten[100], mon[50];
    string abb; // abbreviation : viet tat
public:
    int id;
    GiangVien(){
        strcpy(this->hoten, "");
        strcpy(this->mon, "");
    }
    string getten(){
        string ten[100]; int n = 0;
        char *p = strtok(hoten, " ");
        while(p != NULL){
            ten[n++] = p;
            p = strtok(NULL, " ");
        }
        return ten[n-1];
    }
    string getabb(){
        return abb;
    }
    friend istream &operator >> (istream &is, GiangVien &a){
        is.getline(a.hoten, 100);
        is.getline(a.mon, 50);
        a.id = x++;
        a.abb = get1stletter(a.mon);
        return is;
    }
    friend ostream &operator << (ostream &os, const GiangVien &a){
        os << "GV";
        if(a.id+1 < 10) os << "0";
        os  << a.id+1 << " "
            << a.hoten << " "
            << a.abb << endl;
        return os;
    }
};
bool cmp(GiangVien a, GiangVien b){
    return a.getten() < b.getten();
}
int main(){
    GiangVien ds[1010];
    string list[100]; char tmp[50];
    int n, i, q, j;

    cin >> n; scanf("\n");
    for(i = 0; i < n; i++) cin >> ds[i];

    cin >> q; scanf("\n");
    for(i = 0; i < q; i++){
        cin.getline(tmp, 50);
        list[i] = get1stletter(tmp);
    }
    for(i = 0; i < q; i++){
        cout << "DANH SACH GIANG VIEN BO MON " << list[i] << ":\n";
        for(j = 0; j < n; j++) 
            if(list[i] == ds[j].getabb()) cout << ds[j];
    }
    return 0;
}