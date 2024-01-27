// V. Comparison
#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  char a;
  cin >> num1 >> a >> num2;
  switch (a)
  {
  case '>':
    if (num1 > num2)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
    break;
  case '<':
    if (num1 < num2)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
    break;
  case '=':
    if (num1 == num2)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
    break;
  }

  return 0;
}