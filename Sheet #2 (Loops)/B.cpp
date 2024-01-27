// B. Even Numbers
#include <iostream>
using namespace std;
int main()
{
  int Number;
  cin >> Number;
  if(Number == 1){
    cout << -1<<endl;
  }
  for (int i = 1; i <= Number; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << endl;
    }
  }

  return 0;
}