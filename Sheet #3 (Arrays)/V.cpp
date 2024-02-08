// V. Frequency Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int size;
  cin >> size;

  int arr[size];

  int number;
  cin >> number;
  int freq[number + 1] = {};

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
    freq[arr[i]]++;
  }

  for (int i = 1; i <= number; i++) {
    cout << freq[i] << endl;
  }

return 0;
}