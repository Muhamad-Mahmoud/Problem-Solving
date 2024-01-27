// Y. Easy Fibonacci
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i =1;i<= N;i++) {
		int n1 = 0, n2 = 1, temp;
		temp = n1 + n2; // 1 // 2
		n1 = n2; // 1 // 1
		n2 = temp; // 1 // 2
	}


	return 0;
}