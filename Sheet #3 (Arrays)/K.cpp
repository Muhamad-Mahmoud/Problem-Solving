// K. Sum Digits
#include <iostream>
using namespace std;
int main()
{
  int size;
  long long sum = 0;
  string digits;
  cin >> size ;
  cin >> digits ;

  for(int i=0;i<size;i++) {
    sum += digits[i] - '0';
  }
  cout << sum << endl;

  return 0;
}