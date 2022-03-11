#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten, gt, ns, dchi, sothue, ngayky, ngay, thang, nam;;
	int ma;
};
void nhap(NhanVien &a){
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dchi);
    cin >> a.sothue >> a.ngayky;
    a.thang = a.ns.substr(0,2);
    a.ngay = a.ns.substr(3,2);
    a.nam = a.ns.substr(6,4);
}
int cmp(NhanVien &a, NhanVien &b){
    if(a.nam < b.nam) return 1;
    if(a.nam == b.nam){
        if(a.thang < b.thang) return 1;
        if(a.thang == b.thang){
            if(a.ngay < b.ngay) return 1;
        }
    }
    return 0;
}
void sapxep(NhanVien ds[], int n){
    for(int i = 0; i < n; i++) ds[i].ma = i + 1;
    sort(ds, ds+n, cmp);
}
void inds(NhanVien ds[], int n){
    for(int i = 0; i < n; i++){
        for(int j = (ds[i].ma/10); j<4; j++) cout << "0";
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " ";
        cout << ds[i].dchi << " " << ds[i].sothue << " " << ds[i].ngayky << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
