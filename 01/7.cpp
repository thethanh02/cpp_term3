#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char s1[]="ABBADCCABDCCABD";
    char s2[]="ACCABCDDBBCDDBB";
    cin >> t;
    while(t--){
        double d=0; int n; char c;
        cin >> n;
        if(n==101)
            for(int i=0; i<15; i++){
                cin >> c;
                if(c==s1[i]) d++;
            }
        else for(int i=0; i<15; i++){
                cin >> c;
                if(c==s2[i]) d++;
            }
        cout << fixed << setprecision(2) << d*2/3 << endl;
    }
    return 0;
}

