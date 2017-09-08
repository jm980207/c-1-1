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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j< n; j++)
		{
			if (i + j < n) cout << a[i + j] << " ";
			else cout << a[i + j - n] << " ";

		}
		cout << endl;
	}
}