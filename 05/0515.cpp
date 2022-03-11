#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	char ten[50]; string name, lop, ns; float gpa;
	int ma;
};
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
void nhap(SinhVien a[50], int n){
    for(int i = 0; i < n; i++){
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.getline(a[i].ten, 50);
        getline(cin, a[i].lop);
        getline(cin, a[i].ns);
        cin >> a[i].gpa;
        a[i].name = chuanhoa(a[i].ten);
        if(a[i].ns[1] == '/') a[i].ns.insert(0, "0");
        if(a[i].ns[4] == '/') a[i].ns.insert(3, "0");
        a[i].ma = i + 1;
    }
}
int cmp(SinhVien &a, SinhVien &b){
    if(a.gpa > b.gpa) return 1;
    return 0;
}
void sapxep(SinhVien ds[50], int n){
    sort(ds, ds+n, cmp);
}
void in(SinhVien a[50], int n){
    for(int i = 0; i < n; i++){
        cout << "B20DCCN0";
        for(int j = (a[i].ma/10); j<1; j++) cout << "0";
        cout << a[i].ma << " " << a[i].name << a[i].lop << " " << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
