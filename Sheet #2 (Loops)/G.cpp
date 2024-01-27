// G. Factorial
#include <iostream>
using namespace std;
int main()
{
  int count;
  cin >> count;
  while (count--)
  {
    long long num, mult = 1;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
      mult *= i;
    }
    cout << mult << endl;
  }
  return 0;
}