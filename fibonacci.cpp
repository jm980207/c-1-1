#include <iostream>
using namespace std;
int fibonacci(int n)
{
	if (n < 0) return 1;
	else if (n == 0 || n == 1) return 1;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int num;
	cin >> num;
	for (int i = 0; i<num; i++)
	{
		cout << fibonacci(i) << " ";
	}
}