// X. 8 Neighbors
#include <bits/stdc++.h>
using namespace std;
int main() {
  int row, col, r, c, flag = 1;
  cin >> row >> col;
  char shape[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      cin >> shape[i][j];
  }

  cin >> r >> c;
  for (int i = r - 2; i <= r; i++) {
    for (int j = c - 2; j <= c; j++) {
      if (i >= 0 && i < row && j >= 0 && j < col) {
        if ((shape[i][j] != 'x') && !(i == r - 1 && j == c - 1))
          flag = 0;
      }
    }
  }

  if (flag == 1)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
}