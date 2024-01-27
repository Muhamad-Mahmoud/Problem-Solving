// T. Sort Numbers
#include <iostream>
using namespace std;
int main()
{
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  if (num1 <= num2 && num1 <= num3)
  {
    if (num2 <= num3)
      cout << num1 << endl
           << num2 << endl
           << num3 << endl;
    else
      cout << num1 << endl
           << num3 << endl
           << num2 << endl;
  }
  else if (num2 <= num1 && num2 <= num3)
  {
    if (num3 <= num1)
      cout << num2 << endl
           << num3 << endl
           << num1 << endl;
    else
      cout << num2 << endl
           << num1 << endl
           << num3 << endl;
  }
  else if (num3 <= num2 && num3 <= num1)
  {
    if (num2 <= num1)
      cout << num3 << endl
           << num2 << endl
           << num1 << endl;
    else
      cout << num3 << endl
           << num1 << endl
           << num2 << endl;
  }

  cout << endl
       << num1 << endl
       << num2 << endl
       << num3 << endl;

  return 0;
}