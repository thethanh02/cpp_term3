#include<bits/stdc++.h>
using namespace std;
struct ThoiGian{
	double h, m, s, giay;
};
void nhap(ThoiGian &a){
    cin >> a.h >> a.m >> a.s;
    a.giay = a.h*3600 + a.m*60 + a.s;
}
int cmp(ThoiGian a, ThoiGian b){
    if(a.giay < b.giay) return 1;
    return 0;
}
void inds(ThoiGian ds[], int n){
    sort(ds, ds+n, cmp);
    for(int i = 0; i < n ; i++){
        cout << fixed << setprecision(0) << ds[i].h << " " << ds[i].m << " " << ds[i].s << endl;
    }
}
int main(){
    int n, i;
    cin >> n;
    struct ThoiGian ds[n];
	for(i = 0; i < n; i++) nhap(ds[i]);
	inds(ds,n);
}
