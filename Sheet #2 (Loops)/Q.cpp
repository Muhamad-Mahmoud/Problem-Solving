// Q. Digits

#include <iostream>
using namespace std;
int main()
{
  int nums;
  cin >> nums;
  for (int i = 1; i <= nums; i++)
  {
    int input;
    cin >> input; // 384
    if (input == 0)
      cout << 0;
    int temp = input;
    int spare = input;
    while (spare > 0)
    {                    // 384  // 38 //3
      temp = spare % 10; // 4  // 8 //  3
      cout << temp << " ";
      spare = spare / 10; // 38  // 3  // 0
    }

    cout << endl;
  }

  return 0;
}