// D. Range Sum
#include <iostream>
using namespace std;
int main()
{
  long long size;
  cin >> size;
  while (size--)
  {
    long long num1, num2;
    cin >> num1 >> num2; //  3  ,    6
    if (num1 > num2)
    {
      long long temp = num1;
      num1 = num2;
      num2 = temp;
    }
    num1--;
    long long result1 = num1 * (num1 + 1) / 2;
    long long result2 = num2 * (num2 + 1) / 2;
    cout << result2 - result1 << endl;
  }

  return 0;
}