#include <bits/stdc++.h>
using namespace std;
struct toado{
    double x,y;
}A,B;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> A.x >> A.y >> B.x >> B.y;
        double a = abs(B.x - A.x), b = abs(B.y - A.y);
        cout << fixed << setprecision(4) << sqrt(a*a + b*b) << endl;
    }
    return 0;
}
