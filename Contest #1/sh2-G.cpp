#include <iostream>
using namespace std;
int main()
{
  long long e, m, b, result;
  cin >> e >> m >> b;
  long long mn = (e < m && e < b) ? e : (m < b ? m : b);
  result += mn;
  e -= mn;
  m -= mn;
  b -= mn;
  mn = min(e / 2, b);
  result += mn;
  cout << result << endl;

  return 0;
}