#include<bits/stdc++.h>
using namespace std;
struct goods{
	string ten, nhom;
	double lai, gban, gmua;
	int ma;
};
void nhap(goods a[50], int n){
    for(int i = 0; i < n; i++){
        scanf("\n");
        getline(cin, a[i].ten);
        getline(cin, a[i].nhom);
        cin >> a[i].gmua >> a[i].gban;
        a[i].lai = a[i].gban - a[i].gmua;
        a[i].ma = i + 1;
    }
}
int cmp(goods &a, goods &b){
    if(a.lai > b.lai) return 1;
    return 0;
}
void in(goods a[50], int n){
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " ";
        cout << fixed << setprecision(2) << a[i].lai << endl;
    }
}
int main(){
    struct goods ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
