#include <bits/stdc++.h>
using namespace std;
struct toado{
    int x, y, z;
};
void nhap(toado &A){
    cin >> A.x >> A.y >> A.z;
}
void process(toado A[]){
    int x1[10], y1[10], z1[10], p[10];
    for(int i=1; i<4; i++){
        x1[i] = A[i].x - A[0].x;
        y1[i] = A[i].y - A[0].y;
        z1[i] = A[i].z - A[0].z;
    }
    p[1] = (y1[3]*z1[2] - y1[2]*z1[3]) * x1[1];
    p[2] = (z1[3]*x1[2] - z1[2]*x1[3]) * y1[1];
    p[3] = (x1[3]*y1[2] - x1[2]*y1[3]) * z1[1];
    int check = p[1] + p[2] + p[3];
    if(check == 0) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int x[10],y[10],z[10],t;
    cin >> t;
    while(t--){
        struct toado A[10];
        for(int i=0; i<4; i++) nhap(A[i]);
        process(A);
    }
}
