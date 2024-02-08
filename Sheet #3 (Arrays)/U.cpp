// U. Is B a subsequence of A ?
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int size1, size2;
  cin >> size1 >> size2;
  int arr[size1], arr2[size2];

  for (int i = 0; i < size1; i++){
    cin >> arr[i];
  }

  for (int i = 0; i < size2; i++){
    cin >> arr2[i];
  }

  int z =0 , counter = 0;
  for (int i = 0; i < size1; i++){
    if(arr[i] == arr2[z]){
      counter++;
      z++;
    }
  }
  if(size2 == counter) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}