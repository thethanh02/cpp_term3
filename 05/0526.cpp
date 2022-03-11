#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten, ns, ngay, thang, nam;
};
void nhap(NhanVien &a){
    cin >> a.ten;
    cin >> a.ns;
    a.ngay = a.ns.substr(0,2);
    a.thang = a.ns.substr(3,2);
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
void inds(NhanVien ds[], int n){
    sort(ds, ds+n, cmp);
    cout << ds[n-1].ten << "\n" << ds[0].ten;
}
int main(){
    struct NhanVien ds[100];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}
