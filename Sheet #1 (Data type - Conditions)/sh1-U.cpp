// U. Float or int
#include <iostream>
using namespace std;
int main()
{
  float number;
  cin >> number;
  int decimal = (int)number;
  float FPointe = number - decimal;

  if (FPointe == 0)
  {
    cout << "int " << decimal << endl;
  }
  else
    cout << "float " << decimal << " " << FPointe << endl;
  return 0;
}