#include<iostream>
#include<vector>
using namespace std;
const int MAXLIST = 10000;
struct list {
	int n; 
	int nodes[MAXLIST];
};
list ds;
int tim(vector< pair<int, int> > res, int d, int x) {
	for(int i = 0; i < d; i++) if(x == res[i].first) return i;
	return -1;
}
int main(){
	//cin >> ds.n;
	vector< pair<int, int> > res(MAXLIST);
	int d = 0, i = 0;

	while(cin >> ds.nodes[i]) {
		int t = tim(res, d, ds.nodes[i]);
		if(t == -1) {
			res[d].first = ds.nodes[i];
			res[d].second = 1;
			d++;
		}
		else res[t].second++;
		i++; ds.n++;
	}
	for(int i = 0; i < d; i++) {
		cout << res[i].first << " " << res[i].second << endl;
	}
    return 0;
}
