#include <iostream>
using namespace std;

int main() {
	char arr[4][5];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];

			if ('a' <= arr[i][j] && arr[i][j] <= 'z')
				arr[i][j] -= 32;
			else if ('A' <= arr[i][j] && arr[i][j] <= 'Z')
				arr[i][j] += 32;
			cout << arr[i][j];
			if ((j + 1) % 5 == 0)
				cout << endl;
		}
	}
}