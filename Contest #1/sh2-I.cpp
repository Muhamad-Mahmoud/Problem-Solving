// I. Lucky Numbers
#include <iostream>
using namespace std;
int main()
{
  int number;
  cin >> number;            // 93  10
  int lDigit = number % 10; // 3
  int fDigit = (number - lDigit) / 10;  // (93  - 3 ) / 10 = 9
  if (number >= 10 && number < 100)
  {
    if (lDigit == 0)
      cout << "YES" << endl;
    else if (fDigit % lDigit == 0 || lDigit % fDigit == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}