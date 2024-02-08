// Y. Easy Fibonacci
#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int n1 = 0, n2 = 1;
  for (int i = 1; i <= N; i++)
  {
    cout << n1 << " ";
    int temp = n1 + n2;
    n1 = n2;
    n2 = temp;
  }

  return 0;
}