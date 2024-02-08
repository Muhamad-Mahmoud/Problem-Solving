// C. Finding Minimums
#include <iostream>
using namespace std;
int main()
{
  int N, K; // 11 // 3
  cin >> N >> K;
  int count = 0;
  int min = 0;
  int flage = 1;

  for (int i = 0; i < N; i++) {
    int number;
    cin >> number;
    count++;
    if (flage) {
      min = number;
      flage = 0;
    }
    if (number < min) {
      min = number;
    }
    if (count == K || i == N - 1) {
      cout << min << endl;
      count = 0;
      flage = 1;
    }
  }
  return 0;
}