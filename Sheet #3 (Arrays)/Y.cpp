// Y. Range sum query
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long size, queries;
  cin >> size >> queries;

  long long comulativeArr[size] ;
  long long  arr[size];
  for (int i = 0; i < size; i++) {
      cin >> arr[i];
      if(i == 0) comulativeArr[i] += arr[i] ;
      else 
      comulativeArr[i] = arr[i] + comulativeArr[i-1];
    }

  for (int z = 1; z <= queries; z++) {
    long long start, end;
    cin >> start >> end;  // 2  // 4 , size 7  ==>  1:7 , 1:4  
    start --;
    end --;
    long long sum = comulativeArr[end] - comulativeArr[start] +arr[start];
    cout << sum << endl;
  }

  return 0;
}