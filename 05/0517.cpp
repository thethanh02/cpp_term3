#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten, gt, ns, dchi, sothue, ngayky;
};
void nhap(NhanVien &a){
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dchi);
    cin >> a.sothue >> a.ngayky;

}
void inds(NhanVien ds[], int n){
    for(int i = 0; i < n; i++){
        int chuso = log10(i+1) + 1;
        for(int j = chuso; j < 5; j++) cout << "0";
        cout << i+1 << " ";
        cout << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " ";
        cout << ds[i].dchi << " " << ds[i].sothue << " " << ds[i].ngayky << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
