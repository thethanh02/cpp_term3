#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	char ten[100]; string name, lop, ns; float gpa;
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
        cin.ignore();
        cin.getline(a[i].ten, 100);
        a[i].name = chuanhoa(a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].ns);
        cin >> a[i].gpa;
        if(a[i].ns[1] == '/') a[i].ns.insert(0, "0");
        if(a[i].ns[4] == '/') a[i].ns.insert(3, "0");
    }
}
void in(SinhVien a[50], int n){
    for(int i = 0; i < n; i++){
        cout << "B20DCCN";
        int chuso = log10(i+1) + 1;
        for(int j = chuso; j < 3; j++) cout << "0";
        cout << i+1 << " ";
        cout << a[i].name << a[i].lop << " " << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
