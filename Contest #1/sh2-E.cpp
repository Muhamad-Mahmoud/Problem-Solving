// E. Interval Sweep
#include <iostream>
using namespace std;
int main()
{
  int num1, num2, even = 0, odd = 0;
  cin >> num1 >> num2;
  if (num1 == 0 && num2 == 0)
    cout << "NO" << endl;
  else if (abs(num1 - num2) == 1 || abs(num1 - num2) == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}