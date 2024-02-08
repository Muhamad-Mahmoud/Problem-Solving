// R. Permutation with arrays
#include <bits/stdc++.h>
using namespace std;
void arrSort(int arr[], int size) // int arr [4] = { 3, 2, 1, 4 }
{
  for (int i = 0; i < size; i++)
  {
    int min = i;
    arr[min] = arr[i];
    for (int j = i; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        int temp = arr[j];
        arr[j] = arr[min];
        arr[min] = temp;
      }
    }
  }
}

int main()
{
  int size;
  cin >> size;
  int arr[size];
  int arr2[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for (int z = 0; z < size; z++)
  {
    cin >> arr2[z];
  }

  arrSort(arr, size);
  arrSort(arr2, size);

  int check = 1;
  for (int z = 0; z < size; z++)
  {
    if(arr[z] != arr2[z]){
      check = 0;
    }
  }

  if (check == 1)
    cout << "yes" << endl;
  else
    cout << "no" << endl;

  return 0;
}
