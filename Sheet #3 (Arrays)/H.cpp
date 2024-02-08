// H. Sorting
#include <iostream>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for (int l = 0; l < size; l++)
  {
    int min = l;
    arr[min] = arr[l];
    for (int i = l; i < size; i++)
    {
      if (arr[i] < arr[min])
      {
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
      }
    }
  }
  for (int z = 0; z < size; z++)
  {
    cout << arr[z] << " ";
  }

  return 0;
}