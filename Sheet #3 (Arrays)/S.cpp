// S. Search In Matrix
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row, col, number;
  cin >> row >> col;
  int arr[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }

    cin >> number;

  int found = 0 ;
  for (int l = 0; l < row; l++) {
    for (int j = 0; j < col; j++)
    {
      if (arr[l][j] ==  number) {
          found = 1;
          break;
        }
    }
  }

  if (found == 1) 
    cout << "will not take number" << endl;
  else if(found == 0)
    cout << "will take number" << endl;

  return 0;
}