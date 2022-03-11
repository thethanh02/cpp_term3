#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        char s[1001]; int count = 0;
        fgets(s, 1001, stdin);
        char *p = strtok(s, " \n\t");
        while(p != NULL){
            count++;
            p = strtok(NULL, " \n\t");
        }
        cout << count << endl;
    }
    return 0;

}
