// F. Break Number
#include <iostream>
using namespace std;

int divisivleBy2(long long number) {
  int count = 0;
  while (number % 2 == 0) {
    number /= 2;
    count++;
  }
  return count;
}

int main() {
  int size;
  cin >> size;
  int max = 0;
  int count;
  for (int i = 0; i < size; i++) {
    long long number;
    cin >> number;
    if (number % 2 == 0)
      count = divisivleBy2(number);
    else
      count = 0;
    if (count >= max)
      max = count;
  }

  cout << max << endl;
  return 0;
}
