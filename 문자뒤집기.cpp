#include <iostream>
using namespace std;
int main()
{
	char a[100] = { 0 };
	char i = 0;
	int n = 0;
	while (a[i] != '\n')
	{
		a[i] = cin.get();
		n++;
		if (a[i] == '\n') break;
		i++;
	}
	i = 0;
	while (a[i] != '\n')
	{
		cout << a[n - i - 2];
		i++;
	}
}