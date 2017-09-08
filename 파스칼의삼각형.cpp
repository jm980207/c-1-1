#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	int pa[20] = { 0 };
	int pb[20] = { 1 };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			pb[j + 1] = pa[j] + pa[j + 1];
			cout << " " << pb[j];
		}
		for (int k = 0; k <= i; k++)
		{
			pa[k] = pb[k];
		}
		cout << endl;
	}
}