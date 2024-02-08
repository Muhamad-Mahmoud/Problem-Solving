// B. Searching
#include <iostream>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++){
    cin >> arr[i];
  }
  int found = 0;
  int X;
  cin >> X;
  for(int i = 0; i < size; i++){
    if(arr[i] == X)
    {
      found = 1;
      cout << i << endl;
      break;
    }    
  }
  if(found == 0) cout << -1<< endl;

  return 0;
}