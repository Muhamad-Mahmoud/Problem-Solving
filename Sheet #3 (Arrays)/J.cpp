// J. Lucky Array
#include <iostream>
using namespace std;

int main()
{
  int size;
  cin >> size;

  int arr[size];
  int fl = 0;
  int counter = 0;
  int min;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
    if (fl == 0)
    {
      fl = 1;
      min = arr[i];
    }
    if (arr[i] < min)
      min = arr[i];
  }

  for (int j = 0; j < size; j++)
  {
    if (min == arr[j])
      counter++;
  }

  if (counter % 2 == 0)
    cout << "Unlucky" << endl;
  else
    cout << "Lucky" << endl;

  return 0;
}
