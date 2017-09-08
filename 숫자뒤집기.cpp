#include <iostream>
using namespace std;
int main()
{
	int a[1000] = { 0 };
	int n;

	cin >> n;

	for (int i = 0; i <n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i <n; i++)
	{
		cout << a[n - i - 1] << " ";
	}

}