#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream a("PTIT.in"); ofstream b("PTIT.out");
    string s;
    while(getline(a, s)) {
        b << s << endl;
    }
    a.close();
    b.close();
    return 0;
}
