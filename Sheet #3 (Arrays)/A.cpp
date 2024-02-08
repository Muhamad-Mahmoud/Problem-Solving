// A. Summation
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int size ;
  cin >> size ;
  long long sum = 0 ;
  for (int i = 0; i < size; i++){
    int number;
    cin >> number;
    sum += number;
  }
  cout << abs(sum);

  return 0;
}