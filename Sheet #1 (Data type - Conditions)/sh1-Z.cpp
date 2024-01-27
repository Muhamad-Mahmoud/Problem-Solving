// Z. Hard Compare
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  /*If A^B > C^D print "YES" otherwise, print "NO".*/
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if (b * log(a) > d * log (c))
    cout
        << "YES";
  else
    cout << "NO";

  return 0;
}