#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream a("DATA.in");
    string s; long long sum = 0;
    while(a >> s) {
		stringstream tmp(s);
		long long x = 0;
		tmp >> x;
        if(x <= INT_MAX && x >= INT_MIN) sum += x;
	}
    cout << sum;
    a.close();
    return 0;
}
