#include <iostream>
using namespace std;
int main()
{
	int arr[100] = { 0 };

	int size = -1;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int min = 999999, max = -1, sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i]<min)min = arr[i];
		if (arr[i]>max)max = arr[i];
		sum += arr[i];
	}
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	cout << "sum: " << sum << endl;

	return 0;
}