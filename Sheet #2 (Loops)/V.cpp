// V. PUM

#include <iostream>
using namespace std;
int main()
{
  int number;
  cin >> number;
  for (int j = 1; j <= 4 * number; j++)
  {
    if (j % 4 == 0)
      cout << "PUM\n";
    else
      cout << j << " ";
  }
  return 0;
}