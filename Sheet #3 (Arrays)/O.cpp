// O. Fibonacci
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long number;
  cin >> number;

  long long arr[number];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i < number; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  cout << arr[number - 1] << endl; // 0

  return 0;
}