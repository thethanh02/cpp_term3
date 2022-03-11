#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[1010][10];
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        int dem1 = 0;
        for(int j=0; j<3; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) dem1++;
        }
        if(dem1 > (3-dem1)) count++;
    }
    cout << count;
    return 0;
}
