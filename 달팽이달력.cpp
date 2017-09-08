#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int arr[5][5];
	int x = 0;
	int y = 0;

	for (int k = 5; k > 2; k--)
	{
		for (k; y < k; y++)
			cin >> arr[x][y];
		x++;
		y--;

		for (k; x < k; x++)
			cin >> arr[x][y];
		x--;
		y--;

		for (k; y >= 5 - k; y--)
			cin >> arr[x][y];
		x--;
		y++;

		for (k; x > 5 - k; x--)
			cin >> arr[x][y];
		x++;
		y++;

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << setw(3) << arr[i][j];

		cout << endl;
	}

	return 0;
}