// W. Mathematical Expression
#include <iostream>
using namespace std;
int main()
{
  int num1, num2, num3;
  char a, b;
  cin >> num1 >> a >> num2 >> b >> num3;
  switch (a)
  {
  case '+':
    if (num1 + num2 == num3)
      cout << "Yes" << endl;
    else
      cout
          << num1 + num2 << endl;
    break;
  case '-':
    if (num1 - num2 == num3)
      cout << "Yes" << endl;
    else
      cout
          << num1 - num2 << endl;
    break;
  case '*':
    if (num1 * num2 == num3)
      cout << "Yes" << endl;
    else
      cout
          << num1 * num2 << endl;
    break;
  }

  return 0;
}