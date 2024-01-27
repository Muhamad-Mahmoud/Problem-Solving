// O. Calculator
#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  char a;
  cin >> num1 >> a >> num2;

  switch (a)
  {
  case '+':
    cout << num1 + num2;
    break;
  case '/':
    cout << num1 / num2;
    break;
  case '*':
    cout << num1 * num2;
    break;
  case '-':
    cout << num1 - num2;
    break;
  }

  return 0;
}