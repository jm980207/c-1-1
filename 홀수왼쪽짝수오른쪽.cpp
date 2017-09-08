#include <iostream>
using namespace std;
int main()
{
	int arr[100] = { 0 };
	int size = -1;
	cin >> size;
	int num = -1;
	int evensize = 0, oddsize = size - 1;
	for (int i = 0; i < size; i++)
	{
		if (evensize>oddsize)break;
		cin >> num;
		if (num % 2 == 0)
		{
			arr[evensize] = num;
			evensize++;
		}
		else
		{
			arr[oddsize] = num;
			oddsize--;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}