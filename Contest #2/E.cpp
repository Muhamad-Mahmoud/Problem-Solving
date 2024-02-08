// E. Hady Rides the Train
#include <iostream>
using namespace std;
int main()
{
  long long num;
  cin >> num;
  long long row = num / 4;
  long long col;
  if (row % 2 == 0)
    col = num % 4;
  else
    col = 3 - (num % 4);

  cout << row << " " << col << endl;
  return 0;
}