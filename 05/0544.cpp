#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct toado{
    double x,y;
};
void nhap(toado &A){
    cin >> A.x >> A.y;
}
double check(toado A[]){
    double a, b, c, p, S, R;
    a = sqrt((A[2].x-A[1].x) * (A[2].x-A[1].x) + (A[2].y-A[1].y) * (A[2].y-A[1].y));
    b = sqrt((A[2].x-A[0].x) * (A[2].x-A[0].x) + (A[2].y-A[0].y) * (A[2].y-A[0].y));
    c = sqrt((A[0].x-A[1].x) * (A[0].x-A[1].x) + (A[0].y-A[1].y) * (A[0].y-A[1].y));
    if(a+b <= c || a+c <= b || b+c <= a) return 0;
    p = (a+b+c)/2;
    S = sqrt(p) * sqrt(p-a) * sqrt(p-b) * sqrt(p-c);
    R = (a/S)*(b/4)*c;
    return PI*R*R;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        struct toado A[10];
        for(int i = 0; i < 3; i++) nhap(A[i]);
        if(!check(A)) cout << "INVALID\n";
        else cout << fixed << setprecision(3) << check(A) << endl;
    }
}
