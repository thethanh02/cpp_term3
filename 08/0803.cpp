#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ds;
int tim(int n) {
    for(int i = 0; i < ds.size(); i++) if(ds[i].first == n) return i;
    return -1;
}

int main() {
    ifstream a("DATA.in");
    int n;
    while(a >> n) {
        int t = tim(n);
        if(t == -1) ds.push_back({n, 1});
        else ds[t].second++;
	}
    sort(ds.begin(), ds.end());
    for(int i = 0; i < ds.size(); i++) cout << ds[i].first << " " << ds[i].second << endl;
    a.close();
    return 0;
}
