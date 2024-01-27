// F. Multiplication table
#include <iostream>
using namespace std;
int main()
{
  int number;
  cin >> number;
  if (number <= 50 && number >= 1)
  {
    for (int i = 1; i <= 12; i++)
    {
      cout << number << " * " << i << " = " << number * i << endl;
    }
  }
  return 0;
}