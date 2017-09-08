#include<iostream>
#include<cstdlib>
using namespace std;

int binary(const int arr[], int max, int min, const int c);

int main() {
	int a, b, c;
	int num = 0;
	int arr[100] = { 0 };
	int temp = 0;
	int count = 0;

	cin >> a >> b >> c;
	srand(a);

	for (int i = 0; i < b; i++) {
		num = rand() % 100;
		arr[i] = num;
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < b - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < b; i++)
		cout << arr[i] << " ";
	cout << endl;

	cout << binary(arr, b, 0, c) << endl;

	return 0;
}
int binary(const int arr[], int max, int min, const int c) {
	int middle;

	while (min <= max) {
		middle = (min + max) / 2;

		if (c == arr[middle]) {
			return middle;
		}
		else {
			if (arr[middle] > c)
			{
				max = middle - 1;
			}
			else if (arr[middle] <= c)
			{
				min = middle + 1;
			}
		}
	}
	return -1;
}