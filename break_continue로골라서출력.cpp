#include <iostream>
using namespace std;
int main()
{
	char a = '!';

	while (a != 'Q')
	{
		cin >> a;
		if (a == 'A')
			cout << 'A';
		else if (a == 'C')
			cout << 'C';
		else if (a == 'G')
			cout << 'G';
		else if (a == 'T')
			cout << 'T';
		else if (a != 'A'&&'C'&&'G'&&'T')
			continue;
		else if (a == 'Q')
			break;

	}
	return 0;
}