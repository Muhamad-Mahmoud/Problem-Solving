// H. Data Type Guessing
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  // N K A
  // (N * K) / A
  double n, k, a;
  cin >> n >> k >> a;
  double result = ((n * k) / a);     // 20.33
  long long myResult = result;       // 20
  double number = result - myResult; // 0.33

  if (number > 0)
    cout << "double" << endl;
  else if (myResult <= 2147483648)
    cout << "int" << endl;
  else
    cout << "long long" << endl;
  return 0;
}