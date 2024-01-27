// A. Winter Sale
#include <iostream>
using namespace std;
int main()
{
  double Discount, Price;
  cin >> Discount >> Price;
  double pre = 100 - Discount;
  double PricePercent = Price / pre;
  double PriceAfter = PricePercent * Discount;

  cout << PriceAfter + Price << endl;

  return 0;
}