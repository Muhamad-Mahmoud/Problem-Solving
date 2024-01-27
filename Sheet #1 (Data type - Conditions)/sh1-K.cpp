// K. Max and Min
#include <iostream>
using namespace std;
int main()
{
  long long num1, num2, num3;
  cin >> num1 >> num2 >> num3 ;
  // the min 
  if (num1 <= num2 && num1 <= num3)
    cout << num1 << " " ;
  else if ((num2 <= num1 && num2 <= num3))
    cout << num2 << " " ;
  else if ((num3 <= num1 && num3 <= num2))
    cout << num3 << " " ;

  if (num1 >= num2 && num1 >= num3)
    cout << num1 ;
  else if ((num2 >= num1 && num2 >= num3))
    cout << num2 ;
  else if ((num3 >= num1 && num3 >= num2))
    cout << num3 ;

  return 0;
}