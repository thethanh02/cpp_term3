#include <bits/stdc++.h>
using namespace std;
void permute(vector<int> a, int l, int r){
	if (l == r){
        for(auto i:a) cout << i;
        cout << " ";
	}
	else{
		for(int i = l; i <= r; i++){
			swap(a[l], a[i]);
			permute(a, l+1, r);
			swap(a[l], a[i]);
		}
	}
}//dang bi sai thu tu
int main(){
    int t;
    cin >> t;
    while(t--){
        int x; vector<int> v;
        cin >> x;
        for(int i = 1; i <= x; i++) v.push_back(i);
        int n = v.size();
        permute(v, 0, n-1);
        cout << endl;
    }
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll factorial(ll n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll x = factorial(n);
        vector <int> v(n);
        for(int i=0; i<n; i++) v[i] = i+1;
        while(x--){
            for(auto i:v) cout << i;
            cout << " ";
            next_permutation(v.begin(), v.end());
        }
        cout << endl;
    }
}
