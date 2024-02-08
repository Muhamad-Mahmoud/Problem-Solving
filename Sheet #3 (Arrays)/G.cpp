// G. Palindrome Array
#include <iostream>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int arr[size]; // 5 1 3 2
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

    int isPlainedrom = 0;
  int size_reversed = size - 1;

  for (int z = 0; z < size; z++)
  {
    if (arr[z] == arr[size_reversed])
      isPlainedrom = 1;
    else {
        isPlainedrom = 0;
      break;
    }
        size_reversed--;
  }
  if (isPlainedrom == 1) cout<< "YES"<< endl;
  else cout<< "NO"<< endl;

    return 0;
  }