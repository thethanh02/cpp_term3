#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>> ds;
int tim(string n) {
    for(int i = 0; i < ds.size(); i++) if(ds[i].first == n) return i;
    return -1;
}

int main() {
    ifstream a("VANBAN.in");
    string n;
    while(a >> n) {
        for(int i = 0; i < n.size(); i++) n[i] = tolower(n[i]);
        int t = tim(n);
        if(t == -1) ds.push_back({n, 1});
        // else ds[t].second++;
	}
    sort(ds.begin(), ds.end());
    for(int i = 0; i < ds.size(); i++) 
        cout << ds[i].first << endl;
    a.close();
    return 0;
}
