#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vt vector <int>
#define vtl vector <ll>
#define vts vector <string>
#define matrix vector <vector <int>>
#define matrixl vector <vector <ll>>
const ll MOD = 1e9 + 7;

vts Data1, Data2;

void tol(string& s) {
    for (auto& i : s) i = tolower(i);
}

void out(vts Data) {
    set <string> tmp(Data.begin(), Data.end());
    for (auto i : tmp) {
        if (i != "-1") cout << i << " ";
    }
}

void solution() {
    fstream in1, in2;
    in1.open("DATA1.in", ios::in);
    while (!in1.eof()) {
        string s;
        in1 >> s;
        tol(s);
        Data1.push_back(s);
    }
    in1.close();
    in2.open("DATA2.in", ios::in);
    while (!in2.eof()) {
        string s;
        in2 >> s;
        tol(s);
        Data2.push_back(s);
    }
    in2.close();
    sort(Data1.begin(), Data1.end());
    sort(Data2.begin(), Data2.end());
    vts Data(Data1.size() + Data2.size(), "-1");
    set_union(Data1.begin(), Data1.end(), Data2.begin(), Data2.end(), Data.begin());
    out(Data);
    vts Data0(Data1.size() + Data2.size(), "-1");
    cout << endl;
    set_intersection(Data1.begin(), Data1.end(), Data2.begin(), Data2.end(), Data0.begin());
    out(Data0);
}

int main() {
    solution();
    return 0;
}