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
        cout << mhList[i]->ten << " " << mhList[i]->dvi << " " << mhList[i]->gmua << " " << mhList[i]->gban << " ";
    }
    int getgban(int i){
        return mhList[i]->gban;
    }
};
vector<MatHang*> MatHang::mhList;

class HoaDon{
    int slg;
    string makh, mamh;
public:
    int mahd;
    HoaDon(){
        this->makh = "";
        this->mamh = "";
        this->slg = 1;
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
        KhachHang kh1; MatHang mh1;
        int i = getid(a.makh) - 1, j = getid(a.mamh) - 1;
        kh1.print(i);
        mh1.print(j);
        os << a.slg << " " << a.slg * mh1.getgban(j) << endl;
        return os;
    }
};
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
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}