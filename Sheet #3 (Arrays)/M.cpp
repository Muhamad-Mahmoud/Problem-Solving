// M. Replace MinMax
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int arr[size];
  int min = 1e5;
  int max = 0;
  int minIndex =0;
  int maxIndex =0;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
    if (arr[i] < min)
    {
      min = arr[i];
      minIndex = i;
    }
    if (arr[i] > max)
    {
      max = arr[i];
      maxIndex = i;
    }
  }

  int temp = arr[minIndex];
  arr[minIndex] = arr[maxIndex];
  arr[maxIndex] = temp;

  for(int j =0;j<size;j++){
    cout<< arr[j] << " ";
  }

  return 0;
}