// L. GCD

#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	while (n2 != 0) {
		int temp = n1 % n2;
		n1 = n2;
		n2 = temp;
	}
	cout << n1;
	return 0;
}