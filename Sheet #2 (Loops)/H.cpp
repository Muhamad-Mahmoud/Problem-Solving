// H. One Prime
#include <iostream>
using namespace std;
int main()
{
  int num;
  cin >> num;
  bool check = false;
  for (int i = 2; i < num / 2; i++)
  {
    if (num % i == 0)
    {
      check = true;
    }
  }

  if (check == false)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}