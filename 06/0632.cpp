#include<bits/stdc++.h>
using namespace std;
int z = 0;
int getid(string s){
    string tmp = s.substr(2, 3);
    return atoi(tmp.c_str());
}
class KhachHang{
    string ten, gt, ns, dchi;
public:
    static vector<KhachHang*> khList;
    KhachHang(){
        this->ten = " ";
        this->gt = " ";
        this->ns = " ";
        this->dchi = " ";
    }
    KhachHang operator = (const KhachHang &a){
        return a;
    }
    friend istream &operator >> (istream &is, KhachHang &a){
        string tmp, s = ""; char c;
        do{
            is >> tmp;
            s += tmp; s += " ";
            c = getchar();
	    } while(c != '\n');
        a.ten = s.substr(0, s.size()-1);
        is >> a.gt >> a.ns;
        s = "";
        do{
            is >> tmp;
            s += tmp; s += " ";
            c = getchar();
	    } while(c != '\n');
        a.dchi = s.substr(0, s.size()-1);

        khList.push_back(&a);
        return is;
    }
    void print(int i){
        cout << khList[i]->ten << " " << khList[i]->dchi << " ";
    }
};
vector<KhachHang*> KhachHang::khList;

class MatHang{
    int gmua, gban;
    string ten, dvi;
public:
    static vector<MatHang*> mhList;
    MatHang(){
        this->ten = "";
        this->dvi = "";
        this->gmua = 0;
        this->gban = 0;
    }
    MatHang operator = (const MatHang &a){
        return a;
    }
    friend istream &operator >> (istream &is, MatHang &a){
        scanf("\n");
        getline(is, a.ten);
        getline(is, a.dvi);
        // scanf("\n");
        is >> a.gmua >> a.gban;
        
        mhList.push_back(&a);
        return is;
    }
    void print(int i){
        cout << mhList[i]->ten  << " ";
    }
    int getgban(int i){
        return mhList[i]->gban;
    }
    int getgmua(int i){
        return mhList[i]->gmua;
    }
};
vector<MatHang*> MatHang::mhList;

class HoaDon: public KhachHang, public MatHang{
    int slg;
    
public:
    int mahd; string makh, mamh;
    HoaDon(){
        this->slg = 1;
    }
    int getslg() {
        return slg;
    }
    friend istream &operator >> (istream &is, HoaDon &a){
        is >> a.makh;
        is >> a.mamh;
        is >> a.slg;
        a.mahd = z++;
        return is;
    }
    friend ostream &operator << (ostream &os, const HoaDon &a){
        os << "HD";
        
        if(a.mahd < 9) os << "00";
        else if(a.mahd < 99) os << "0";
        else ;
        os << a.mahd + 1 << " ";

        int i = getid(a.makh) - 1, j = getid(a.mamh) - 1;
        a.khList[0]->print(i);
        a.mhList[0]->print(j);
        os << a.slg << " " << a.slg * a.mhList[0]->getgban(j) << " " << a.slg*(a.mhList[0]->getgban(j) - a.mhList[0]->getgmua(j)) << endl;
        return os;
    }
};

int cmp(HoaDon a, HoaDon b) {
    int akh = getid(a.makh) - 1, amh = getid(a.mamh) - 1,
        bkh = getid(b.makh) - 1, bmh = getid(b.mamh) - 1;
    int l1 = a.getslg()*(a.mhList[0]->getgban(amh) - a.mhList[0]->getgmua(amh)), 
        l2 = b.getslg()*(b.mhList[0]->getgban(bmh) - b.mhList[0]->getgmua(bmh));
    if(l1 > l2) return 1;
    else if(l1 == l2) {
        if(a.mahd < b.mahd) return 1;
        return 0;
    }
    return 0;
}
void sapxep(HoaDon ds[105], int k) {
    sort(ds, ds+k, cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}