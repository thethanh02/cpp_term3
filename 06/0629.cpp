#include<bits/stdc++.h>
using namespace std;
class CongTy{
    int slg;
    string ten, abb; // abbreviation : viet tat
public:
    CongTy(){
        this->ten = "";
        this->abb = "";
        this->slg = 1;
    }
    int getslg(){
        return slg;
    }
    string getabb(){
        return abb;
    }
    friend istream &operator >> (istream &is, CongTy &a){
        scanf("\n");
        getline(is, a.abb);
        getline(is, a.ten);
        is >> a.slg;
        return is;
    }
    friend ostream &operator << (ostream &os, const CongTy &a){
        os  << a.abb << " "
            << a.ten << " "
            << a.slg << endl;
        return os;
    }
};
int cmp(CongTy a, CongTy b){
    if(a.getslg() > b.getslg()) return 1;
    if(a.getslg() == b.getslg()){
        if(a.getabb() < b.getabb()) return 1;
    }
    return 0;
}
int main(){
    CongTy ds[1010];
    int n, i, q, j;

    cin >> n;
    for(i = 0; i < n; i++) cin >> ds[i];

    sort(ds, ds+n, cmp);

    cin >> q;
    int a[q], b[q];
    for(i = 0; i < q; i++) cin >> a[i] >> b[i]; 
    for(i = 0; i < q; i++){
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a[i] <<  " DEN " << b[i] << " SINH VIEN:\n";
        for(j = 0; j < n; j++)
            if(ds[j].getslg() >= a[i] && ds[j].getslg() <= b[i]) cout << ds[j];
    }
    return 0;
}