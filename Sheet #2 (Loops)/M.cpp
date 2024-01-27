// M. Lucky Numbers

#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int count = 0;
    for (int i = A; i <= B; i++) {
        bool check = true;
        int temp = i;     // 4
        int spare = temp; // 4

        while (temp > 0) {   // 477 // 47  //  4
            spare = temp % 10; // 7  // 7   // 4
            if (spare == 7 || spare == 4)
                temp = temp / 10; // 47  // 4
            else {
                check = false;
                break;
            }
        }

        if (check == true) {
            count++;
            cout << i << " ";
        }
    }
    if (count == 0) cout << -1;

    return 0;
}