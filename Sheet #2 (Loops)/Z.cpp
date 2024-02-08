// Z. Three Numbers

#include <iostream>
using namespace std;
int main()
{
  long long x, y, z, count = 0;
  cin >> x >> y;
  for (int i = 0; i <= x; i++)
  {
    for (int j = 0; j <= x; j++)
    {
      z = y - i - j;
      if (z >= 0 && z <= x)
        count++;
    }
  }

  cout << count << endl;

  return 0;
}