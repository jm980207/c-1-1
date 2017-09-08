#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 1; i<a; i++)
	{
		if (i % 10 == 0)
			continue;
		else if (i % 2 == 0)
			cout << i << " ";
		else if (i % 5 == 0)
			cout << i << " ";

	}
	return 0;
}