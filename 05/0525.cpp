#include<bits/stdc++.h>
using namespace std;
struct data{
	string ma, ten, lop;
	double d1, d2, d3;
};
void nhap(data &a){
    cin.ignore();
    getline(cin, a.ma);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
}
int cmp(data a, data b){
    if(a.ten < b.ten) return 1;
    return 0;
}
void inds(data ds[], int n){
    sort(ds, ds+n, cmp);
    for(int i = 0; i < n ; i++){
        cout << i+1 << " " << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
    }
}
int main(){
    int n, i;
    cin >> n;
    struct data ds[n];
	for(i = 0; i < n; i++) nhap(ds[i]);
	inds(ds,n);
	return 0;
}
