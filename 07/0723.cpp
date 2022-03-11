#include<bits/stdc++.h>
using namespace std;
bool CMP(string a, string b){
    return a>b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; char x;
        int res[10] = {0};
        cin >> n;
        while(n--){
            cin >> x;
            if(x == '2' || x == '3' || x == '5' || x == '7') res[x-'0']++;
            if(x == '4'){
                res[3]++; res[2]+=2;
            }
            if(x == '6'){
                res[5]++; res[3]++;
            }
            if(x == '8'){
                res[7]++; res[2]+=3;
            }
            if(x == '9'){
                res[7]++; res[3]+=2; res[2]++;
            }
        }
        for(int i = 9; i > 1; i--){
            while(res[i] > 0){
                cout << i; res[i]--;
            }
        }
        cout << endl;
    }
}
