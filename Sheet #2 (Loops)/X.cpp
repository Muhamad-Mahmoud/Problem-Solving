// X. Convert To Decimal 2
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        int number;
        cin >> number;
        int power = 0;
        long long sum = 0;
        while (number) {
            int y = number % 2;
            number /= 2;

            if (y == 1) {
                sum += pow(2, power);
                power++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}