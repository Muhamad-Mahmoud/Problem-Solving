// Q. Count Subarrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tesCacees;
  cin >> tesCacees;
  while (tesCacees--)
  {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
      cin >> arr[i];

    int count = 0;

    for (int z = 0; z < size; z++)
    {
      for (int l = z; l < size; l++)
      {
        if (arr[l] >= arr[l - 1])
          count++;
        else break;
      }
    }
    cout << count + size << endl;
  }
  return 0;
}