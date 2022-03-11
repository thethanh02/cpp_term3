#include <bits/stdc++.h>
using namespace std;
struct mat_char {
    char c;
} a[30][30];
char val = 'I';
void find_around(int i, int j) {
    a[i][j].c = val;
    if(a[i-1][j].c == 'O') {
        a[i-1][j].c = val;
        find_around(i-1, j);
    }
    if(a[i][j-1].c == 'O') {
        a[i][j-1].c = val;
        find_around(i, j-1);
    }
    if(a[i][j+1].c == 'O') {
        a[i][j+1].c = val;
        find_around(i, j+1);
    }
    if(a[i+1][j].c == 'O') {
        a[i+1][j].c = val;
        find_around(i+1, j);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < 30; i++)
            for(int j = 0; j < 30; j++) a[i][j].c = 'I';
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++) cin >> a[i][j].c;
        // tim xung quanh
        val = 'I';
        for(int i = 1; i <= n; i++){
            if(a[i][1].c == 'O') find_around(i, 1);
            if(a[i][m].c == 'O') find_around(i, m);
        }
        for(int i = 1; i <= m; i++){
            if(a[1][i].c == 'O') find_around(1, i);
            if(a[n][i].c == 'O') find_around(n, i);
        }
        // tim ben trong
        val = 'X';
        for(int i = 2; i < n; i++){
            for(int j = 2; j < m; j++)
                if(a[i][j].c == 'O') find_around(i, j);
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j].c == 'I') a[i][j].c = 'O';
                cout << a[i][j].c << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
