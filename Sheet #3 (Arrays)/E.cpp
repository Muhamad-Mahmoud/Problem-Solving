// E. Lowest Number
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

int min = arr[0];
int index = 0;
  for(int z = 0; z < size; z++){
    if(arr[z] < min ) {
      min = arr[z];
      index = z;
    }
  }
      cout<< min<<" "<<index +1<<endl;
  return 0;
}