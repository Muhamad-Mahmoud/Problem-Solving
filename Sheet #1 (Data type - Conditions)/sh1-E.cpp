// E. Area of a Circle
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  // Area = π * R2 
  double r ;
  cin >> r ;
  double area = 3.141592653 * (r * r)  ;
  cout << fixed << setprecision(9) << area << endl ;
  return 0;
}