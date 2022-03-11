#include<bits/stdc++.h>
using namespace std;
struct data{
    int tt;
	string ma, ten, lop, email, dn;
};
void nhap(data &a){
    getline(cin, a.ma);
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.email);
    getline(cin, a.dn);
}
int cmp(data a, data b){
    if(a.ma < b.ma) return 1;
    return 0;
}
void in(data a){
    cout << a.tt << " " << a.ma << " " << a.ten << " " << a.lop << " " << a.email << " " << a.dn << endl;
}
void inds(data ds[], int n, string d[], int q){
    sort(ds, ds+n, cmp);
    for(int i = 0; i < q ; i++)
        for(int j = 0; j < n ; j++)
            if(ds[j].dn == d[i]) in(ds[j]);
}
int main(){
    int n, i, q;
    cin >> n; cin.ignore();
    struct data ds[n];
	for(i = 0; i < n; i++){
        nhap(ds[i]); ds[i].tt = i + 1;
	}
	cin >> q; cin.ignore();
	string doanhnghiep[q];
	for(i = 0; i < q; i++) getline(cin, doanhnghiep[i]);
	inds(ds, n, doanhnghiep, q);
	return 0;
}
