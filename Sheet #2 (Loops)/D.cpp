// D. Fixed Password
#include <iostream>
using namespace std;
int main()
{
  int check ;
  while (check != 1999 ){
    cin >> check;
    if(check == 1999)
      cout << "Correct" << endl;
    else
      cout << "Wrong" << endl;
  }
  return 0;
}