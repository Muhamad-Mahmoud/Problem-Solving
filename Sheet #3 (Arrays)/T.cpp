// T. Matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;

  int arr[N][N];

  for (int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> arr[i][j];
    }
  }

  int sum1 =0;
  for (int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(i == j) sum1+=arr[i][j];
    }
  }

  int sum2 = 0;
  for (int i = 0; i < N; i++) {
    for(int j = N - 1; j >= 0 ;j--) {
      if  ((N -1) - j == i)
        sum2+=arr[i][j];
    }
  }

  cout<< abs(sum1 - sum2) << endl;

  return 0;
}