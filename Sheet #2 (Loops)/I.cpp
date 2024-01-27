// I. Palindrome
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string num;
  cin >> num;

  string reversed = "";
  int last = num.size() - 1;

  bool check = true;
  for (int i = last; i >= 0; i--) {
    if (num[i] == '0' && check)
      continue;
    check = false;
    reversed += num[i];
  }

  cout << reversed << endl;

  if (num == reversed)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
