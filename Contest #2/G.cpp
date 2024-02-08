// G. Construct the Sum
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long size;
    cin >> size;

    while (size--) {
        long long sum = 0;
        long long num1, num2;
        cin >> num1 >> num2;

        if (num1 * (num1 + 1) / 2 < num2) {
            cout << "-1" << endl;
        }
        else {
            vector<long long> elements;
            for (long long i = num1; i >= 1; i--) {
                if (sum + i <= num2) {
                    sum += i;
                    elements.push_back(i);  
                }
                if (sum == num2) break;
            }

            for (long long z = 0; z < elements.size(); z++) {
                cout << elements[z] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
