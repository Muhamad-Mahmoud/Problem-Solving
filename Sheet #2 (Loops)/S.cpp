// S. Sum of Consecutive Odd Numbers

#include <iostream>
using namespace std;
int main()
{
  int nums;
  cin >> nums;
  for (int i = 1; i <= nums; i++)
  {
    int sum = 0;
    int a, b;
    cin >> a >> b;
    if (a > b)
      swap(a, b);

    for (int i = a + 1; i < b; i++)
    {
      if (i % 2 != 0)
        sum += i;
    }
    cout << sum << endl;
  }
  return 0;
}