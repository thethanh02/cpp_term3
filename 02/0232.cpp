#include <bits/stdc++.h>
using namespace std;
bool cmp(int i, int j){
    return i > j;
}
int largest_rect(int a[][50], int n, int m) {
	int tmp[n + 1][m + 1]; // matrix phụ lưu số 1 liên tiếp
	for (int i = 0; i < m; i++) {
		tmp[0][i] = a[0][i];
		for (int j = 1; j < n; j++)
			tmp[j][i] = (a[j][i] == 0) ? 0 : tmp[j - 1][i] + 1;
	}
	for (int i = 0; i < n; i++) { // sắp xếp lại matrix theo từng dòng
        sort(tmp[i], tmp[i] + m, cmp);
	}
	int S_rect, max_S = 0;
	for (int i = 0; i < n; i++) { // tìm S_hcn lớn nhất
		for (int j = 0; j < m; j++) {
			S_rect = (j + 1) * tmp[i][j];
			max_S = max(max_S, S_rect);
		}
	}
	return max_S;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][50];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
	    cout << largest_rect(a, n ,m) << endl;
    }
	return 0;
}
