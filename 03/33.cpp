#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[101]; string name[100];
    int count = 0;
    fgets(s, 101, stdin);
    char *p = strtok(s, " \n");
    while(p != NULL){
        name[count] = p;
        name[count][0] = toupper(name[count][0]);
        for(int i=1; i<name[count].size(); i++){
            name[count][i] = tolower(name[count][i]);
        }
        count++;
        p = strtok(NULL, " \n");
    }
    count--;
    for(int i=0; i<name[count].size(); i++)
        name[count][i] = toupper(name[count][i]);
    for(int i=0; i<count-1; i++) cout << name[i] << " ";
    cout << name[count-1] << ", " << name[count];
    return 0;
}
