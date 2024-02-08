// W. Mirror Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int row, col;
  cin >> row >> col;

  int arr[row][col];
  for (int i = 0; i < row; i++) {
    for (int z = 0; z < col; z++)
      cin >> arr[i][z];
  }

  for (int i = 0; i < row; i++){
    for (int z = col - 1; z >= 0; z--)
      cout << arr[i][z] << " ";
    cout << endl;
  }

  return 0;
}