// H. Two numbers
/*
  floor 10 / 4 = 2
  ceil 10 / 4 = 3
  round 10 / 4 = 3

*/
#include <iostream>
using namespace std;
int main()
{
  float num1, num2;
  cin >> num1 >> num2;
  // floor
  int floor = num1 / num2;
  cout << "floor " << num1 << " / " << num2 << " = " << floor << endl;
  // Ceil
  int ceil;
  if (num1 != num2)
    ceil = (num1 / num2) + 1;
  else 
    ceil = (num1 / num2) ;
  cout << "ceil " << num1 << " / " << num2 << " = " << ceil << endl;

  // round
  float number = (num1 / num2);
  int round = number * 10;

  if ((round % 10) < 5)
  {
    cout << "round " << num1 << " / " << num2 << " = " << floor << endl;
  }
  else
  {
    cout << "round " << num1 << " / " << num2 << " = " << ceil << endl;
  }

  return 0;
}