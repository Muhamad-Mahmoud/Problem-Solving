// F. Reversing
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

  for(int z = size-1; z >=0; z--){
    cout<< arr[z] << " " ;
  }
  cout<<endl;
  return 0;
}