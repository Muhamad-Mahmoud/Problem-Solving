//N. Char
#include <iostream>
using namespace std;
int main()
{
  char A;
  cin >> A;
  if (isupper(A))
    cout << char(tolower(A));
  else if (islower(A))
    cout << char(toupper(A));

  return 0;
}