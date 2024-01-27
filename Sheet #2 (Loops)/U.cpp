// U. Some Sums

#include <iostream>
using namespace std;
int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int sums = 0;

  for (int i = 1; i <= N; i++)
  { // Nums (1,100)
    if (i == 0)
      cout << 0;
    int temp = i;
    int spare = i;
    int calc = 0;
    while (spare > 0)
    {
      temp = spare % 10;
      calc += temp;
      spare = spare / 10;
    }
    if (calc >= A && calc <= B || calc <= A && calc >= B)
    {
      sums += i;
    }
  }
  cout << sums << endl;

  return 0;
}