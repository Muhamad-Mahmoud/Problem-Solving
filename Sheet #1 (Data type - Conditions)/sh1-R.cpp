// R. Age in Days
#include <iostream>
using namespace std;
int main()
{
  int numDays;
  cin >> numDays;
  int years = numDays / 365;
  int months = (numDays % 365) / 30;
  int days = (numDays % 365) % 30;

  cout << years << " years" << endl
       << months << " months" << endl
       << days << " days" << endl;
  return 0;
}