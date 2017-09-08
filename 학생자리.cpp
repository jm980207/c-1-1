#include<iostream>
#include<cstdlib>
using namespace std;

int bubble(int arr[], int size);
int main()
{
	int n, r, arr[100];
	cin >> n >> r;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bubble(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if (i%r == r - 1)
		{
			cout << endl;
		}
	}
	return 0;
}

int bubble(int arr[], int size)
{
	int tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}