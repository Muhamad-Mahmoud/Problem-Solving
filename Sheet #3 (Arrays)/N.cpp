// N. Check Code
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B; // 3   ,   3
  string digits;
  cin >> digits;

  if (digits[A] != '-')
  {
    cout << "No" << endl;
    return 0;
  }
  else
  {
    for (int i = 0; i < digits.size(); i++)
    {
      if (i == A)
        continue;
      else if (digits[i] >= '0' && digits[i] <= '9')
        ;
      else
      {
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
  }

  return 0;
}