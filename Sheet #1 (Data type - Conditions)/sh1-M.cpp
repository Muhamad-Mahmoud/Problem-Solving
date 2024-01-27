// M. Capital or Small or Digit
#include <iostream>
using namespace std;
int main()
{
  char A;
  cin >> A;
  if (isdigit(A))
    cout << "IS DIGIT" << endl;
  else if (isupper(A))
  {
    cout << "ALPHA" << endl;
    cout << "IS CAPITAL";
  }
  else
  {
    cout << "ALPHA" << endl;
    cout << "IS SMALL";
  }

  return 0;
}