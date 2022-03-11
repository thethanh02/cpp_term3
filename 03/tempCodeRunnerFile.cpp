#include <bits/stdc++.h>
void chuthuong(char s[]){
    for(int i=0; i<strlen(s); i++)
        s[i] = tolower(s[i]);
}
using namespace std;
int main(){
    char s[101]; string name[100];
    int count = 0;
    cin.getline(s,101);
    chuthuong(s);
    char *p = strtok(s, " \n");
    while(p != NULL){
        name[count] = p;
        count++;
        p = strtok(NULL, " \n");
    }
    count--;
    cout << name[count];
    for(int i=0; i<count; i++) cout << name[i][0];
    cout << "@ptit.edu.vn";
    return 0;
}
