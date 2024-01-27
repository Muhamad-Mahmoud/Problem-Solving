// E. Max
#include <iostream>
using namespace std;
int main()
{
  int count, max = 0;
  cin >> count;
  for (int i = 1; i <= count; i++)
  {
    int num = 0;
    cin >> num; 
    if (i == 1)
      max = num;
    if (num > max)
    {
      max = num;
    }
  }

  cout << max << endl;

  return 0;
}