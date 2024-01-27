// J. Primes from 1 to n
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N; // 7 
	for (int i = 2; i <= N; i++) {
		if (i == 2)
			cout << 2 << " ";
		else {
			bool check = true;
			for (int j = 2; j < i; j++) {
				if (i % j == 0)
				{
					check = false;
				}

			}
			if (check ) cout << i << " ";
		}
	}

	return 0;
}