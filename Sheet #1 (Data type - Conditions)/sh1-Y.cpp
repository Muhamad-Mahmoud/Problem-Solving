// Y. The last 2 digits
#include <iostream>
using namespace std;
int main()
{
  long long a, b, c, d, result;
  cin >> a >> b >> c >> d;
  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;

  result = (a * b * c * d);
  if(result % 100 <= 9)
    cout << 0;
  cout << result % 100;
  return 0;
}