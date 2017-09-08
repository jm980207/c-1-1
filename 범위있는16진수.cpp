#include <iostream>
using namespace std;
char al(char a)
{
	if (a <= 9)
		return a + '0';
	else if (a < 16)
		return a + 'A' - 10;
}
int main()
{
	int n;
	int n1, n2, n3, n4;
	cin >> n;
	if (n >= 0 && n <= 65535)
	{
		n1 = (n / 16 / 16 / 16) % 16;
		n2 = (n / 16 / 16) % 16;
		n3 = (n / 16) % 16;
		n4 = n % 16;
		cout << al(n1) << al(n2) << al(n3) << al(n4) << endl;

	}
	else cout << "error" << endl;
	return 0;
}