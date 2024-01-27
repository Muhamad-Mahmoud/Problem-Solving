// C. Next Alphabet
#include <iostream>
using namespace std;
int main()
{
  char a;
  cin >> a;
  int askiiNum = a;
  int result = askiiNum + 1;
  if (a == 'z')
  {
    cout << 'a';
  }
  else
  {
    cout << (char)result << endl;
  }

  return 0;
}