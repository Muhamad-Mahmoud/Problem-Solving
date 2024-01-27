// N. Numbers Histogram

#include <iostream>
using namespace std;
int main()
{
	char op;
	cin >> op;
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		int input;
		cin >> input;
		for (int j = 1; j <= input; j++) {
			cout << op;
		}
		cout << endl;
	}

	return 0;
}