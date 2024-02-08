// P. Minimize Number
#include <iostream>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  int count = 0;
  while (true)
  {
    int check = 1;
    for (int j = 0; j < size; j++) {
      if (arr[j] % 2 != 0)
        check = 0;
    }
    if (check == 1)
    {
      count++;
      for (int z = 0; z < size; z++)
      {
        arr[z] = arr[z] / 2;
      }
    }
    else {
      break;
    }
  }

  cout << count  << endl;

  return 0;
}