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
    char mon[50];
    string hoten, abb; // abbreviation : viet tat
public:
    int id;
    GiangVien(){
        this->hoten = "";
        strcpy(this->mon, "");
    }
    string getten(){
        return hoten;
    }
    friend istream &operator >> (istream &is, GiangVien &a){
        getline(is, a.hoten);
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
string upper(const string& str)
{
    string upper = str;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    return upper;
}

string::size_type find_sm_ignore(const string& str, const string& substr)
{
    return upper(str).find(upper(substr) );
}
int main(){
    GiangVien ds[1010];
    string list[100]; char tmp[50];
    int n, i, q, j;

    cin >> n; scanf("\n");
    for(i = 0; i < n; i++) cin >> ds[i];

    cin >> q; scanf("\n");
    for(i = 0; i < q; i++) getline(cin, list[i]);
    for(i = 0; i < q; i++){
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << list[i] << ":\n";
        for(j = 0; j < n; j++)
            if(find_sm_ignore(ds[j].getten(), list[i]) != -1) cout << ds[j];
    }
    return 0;
}