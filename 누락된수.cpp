#include <iostream>
using namespace std;
int main()
{

	int arr[1000] = { -1 };
	int n;
	int a = 0;

	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> a;
		arr[a] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != 1)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}