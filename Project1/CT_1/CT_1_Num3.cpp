#include <iostream>

using namespace std;

int factorial(int N) {
	int result = 1;
	for (int i = 2; i <= N; ++i)
	{
		result *= i;

	}
	return result;
}
int main() {
	int n;
	int result;
	int count = 0;
	cout << "Enter a number: ";
	cin >> n;

	result = factorial(n);
	while (result % 10 == 0)
	{
		count = count + 1;
		result = result / 10;
	}
	cout << count;
	return 0;

}


