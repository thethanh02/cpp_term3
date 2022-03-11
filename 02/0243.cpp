#include<bits/stdc++.h>
using namespace std;
struct mang{
    int so, dem;
};
int tim(int x, int n, mang a[]){
    for(int i = 0; i < n ; i++) if(x == a[i].so) return i;
    return -1;
}
bool cmp(mang a, mang b){
    return a.so < b.so;
}
int main(){
    int time;
    cin >> time;
    while(time--){
        int n, m, x;
        cin >> n >> m;
        struct mang a1[n], a2[m];
        int d1 = 0, d2 = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            int t = tim(x, d1 , a1);
            if(t == -1){
                a1[d1].so = x;
                a1[d1].dem = 1;
                d1++;
            }
            else a1[t].dem++;
        }
        for(int i = 0; i < m; i++){
            cin >> x;
            int tmp = tim(x, d2, a2);
            if(tmp == -1){
                int t = tim(x, d1, a1);
                if(t != -1){
                    a2[d2].so = x;
                    a2[d2].dem = a1[t].dem;
                    if(t != d2) swap(a1[t], a1[d2]);
                    d2++;
                }
            }
        }
        sort(a1+d2, a1+d1, cmp);
        for(int i = 0; i < d1; i++){
            for(int j = 0; j < a1[i].dem; j++) cout << a1[i].so << " ";
        }
        cout << endl;
    }
}