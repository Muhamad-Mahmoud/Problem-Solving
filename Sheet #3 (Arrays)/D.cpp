// D. Positions in array
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

  for(int z = 0; z < size; z++){
    if(arr[z] <= 10)
    cout<< "A[" << z << "] = " << arr[z] << endl;
  }
  return 0;
}