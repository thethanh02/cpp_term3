#include <bits/stdc++.h>
using namespace std;

int r, c;

void swap(int mat[15][15], int row1, int row2, int col) {
    for (int i = 0; i < col; i++) {
        swap(mat[row1][i], mat[row2][i]);
    }
}


int rankOfMatrix(int mat[15][15]) {
    int rank = c;
    for (int row = 0; row < rank; row++) {
        if (mat[row][row]) {
            for (int col = 0; col < r; col++) {
                if (col != row) {
                    double mult = (double)mat[col][row] /
                        mat[row][row];
                    for (int i = 0; i < rank; i++)
                        mat[col][i] -= mult * mat[row][i];
                }
            }
        }
        else {
            bool reduce = true;
            for (int i = row + 1; i < r; i++) {
                if (mat[i][row])
                {
                    swap(mat, row, i, rank);
                    reduce = false;
                    break;
                }
            }
            if (reduce) {
                rank--;
                for (int i = 0; i < r; i++)
                    mat[i][row] = mat[i][rank];
            }
            row--;
        }
    }
    return rank;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> r >> c;
        int v[15][15];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> v[i][j];

        cout << rankOfMatrix(v) << endl;
    }
}