#include <iostream>
using namespace std;

int max(int a, int b, int c) {
	int m = -1;

	if (a <= b) {
		if (b<c)
		{
			m = c;
		}
		else if (b>c)
		{
			m = b;
		}
	}
	else if (a > b) {
		if (a<c)
		{
			m = c;
		}
		else if (a>c)
		{
			m = a;
		}
	}
	return m;
}

int main() {
	int d, e, f;
	cin >> d >> e >> f;
	cout << max(d, e, f) << "\n";

	return 0;
}