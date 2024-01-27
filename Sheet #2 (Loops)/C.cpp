// C. Even, Odd, Positive and Negative
#include <iostream>
using namespace std;
int Even = 0, Odd = 0, Positive = 0, Negative = 0;
int main()
{
  int counter;
  cin >> counter;
  int Even = 0, Odd = 0, Positive = 0, Negative = 0;
  for (int i = 1; i <= counter; i++)
  {
    int num1;
    cin >> num1;
    if (num1 % 2 == 0)
    {
      Even++;
    }
    else
    {
      Odd++;
    }
    if (num1 == 0)
    {
    }
    else if (num1 > 0)
    {
      Positive++;
    }
    else
    {
      Negative++;
    }
  }

  cout << "Even: " << Even << endl
       << "Odd: " << Odd << endl
       << "Positive: " << Positive << endl
       << "Negative: " << Negative << endl;

  return 0;
}