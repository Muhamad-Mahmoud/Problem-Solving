// R. Sequence of Numbers and Sum

#include <iostream>
using namespace std;
int main()
{	
	while (true) {
		int sum = 0;
		int A, B;
		cin >> A >> B;
		if (A > B)	swap(A, B);

		if (B < 1 || A < 1)
			break;

		for (int i = A; i <= B; i++) {
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum << endl;

	}
	return 0;
}