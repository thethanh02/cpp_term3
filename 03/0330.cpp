#include<bits/stdc++.h>
using namespace std;
int chan(vector <int>n) {
	for(int i = 0; i < 10; i++) if(n[i] > 0 && n[i] % 2 == 0) return 1;
	return -1;
}
void Solution() {
	string s;
	cin >> s;

	vector <int>n(10, 0);
	int m = 0, vt = -1;
	for(int i = 0; i < s.size(); i++) n[s[i] - '0']++;

	for(int i = 9; i > 0; i--) {
		if(n[i] % 2 == 1 && m < n[i]) {
			m = n[i];
			vt = i;
		}
	}
	if(chan(n) == 1) {
		if(n[0] % 2 == 1 && m < n[0]) {
			m = n[0];
			vt = 0;
		}
	}
	//n[vt]--;
	vector<int> v;
	for(int i = 0; i < 10; i++) {
		if(n[i] > 0 && n[i] % 2 == 0) {
			for(int j = 0; j < n[i]/2; j++) v.push_back(i);
		}
	}
	while(!v.empty() && v[v.size()-1] == 0) v.pop_back();


	for(int i = v.size()-1; i >= 0; i--) cout << v[i];
	if(vt >= 0) for(int i = 0; i < n[vt]; i++) cout << vt;
	for(int i = 0; i < v.size(); i++) cout << v[i];
	cout << endl;
    // in sai roi thay oi
    // input 5533300
    // output 5303035 chu thay 
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		Solution();
	}
    return 0;
}
